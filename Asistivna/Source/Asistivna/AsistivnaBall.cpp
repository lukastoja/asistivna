// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AsistivnaBall.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Ball.h"
#include "Engine/World.h"
#include "Engine.h"
#include "Blueprint/UserWidget.h"

AAsistivnaBall::AAsistivnaBall()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh"));

	// Create mesh component for the ball
	Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball0"));
	Ball->SetStaticMesh(BallMesh.Object);
	Ball->BodyInstance.SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	Ball->SetSimulatePhysics(true);
	Ball->SetAngularDamping(0.1f);
	Ball->SetLinearDamping(0.1f);
	Ball->BodyInstance.MassScale = 3.5f;
	Ball->BodyInstance.MaxAngularVelocity = 800.0f;
	Ball->SetNotifyRigidBodyCollision(true);
	RootComponent = Ball;

	// Create a camera boom attached to the root (ball)
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->bDoCollisionTest = false;
	SpringArm->SetUsingAbsoluteRotation(true); // Rotation of the ball should not affect rotation of boom
	SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));
	SpringArm->TargetArmLength = 1200.f;
	SpringArm->bEnableCameraLag = false;
	SpringArm->CameraLagSpeed = 3.f;

	// Create a camera and attach to boom
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	//kreiranje widgeta
	static ConstructorHelpers::FClassFinder<UUserWidget> MainHudClass(TEXT("/Game/Blueprints/widgets/MainWidget"));
	MainHUD = MainHudClass.Class;

	// Set up forces
	RollTorque = 5000000.0f;
	JumpImpulse = 350000.0f;
	bCanJump = true; // Start being able to jump

	T = 0;
	t = 0;
	throwFlag = false;

	spawnLocation = 100;
	BarCounter = 0;
	BarFaze = 1;
	brzinaBara = 0.025;
	barFlag = true;

	LineAngle = 0;
	angleSpeed = -1;

	polovica_duljine = 250;
	duljina = 500;
}

void AAsistivnaBall::BeginPlay()
{
	Super::BeginPlay();

	UWorld* TheWorld = GetWorld();
	FString CurrentLevel = TheWorld->GetMapName();
	CurrentLevel.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);
	if (CurrentLevel != "MainMenuMap")
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), MainHUD);

		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}
}


void AAsistivnaBall::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAxis("MoveRight", this, &AAsistivnaBall::MoveRight);
	PlayerInputComponent->BindAxis("MoveForward", this, &AAsistivnaBall::MoveForward);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AAsistivnaBall::Jump);
	PlayerInputComponent->BindAction("Throw", IE_Pressed, this, &AAsistivnaBall::Throw);
	PlayerInputComponent->BindAction("Roll", IE_Pressed, this, &AAsistivnaBall::Roll);
	PlayerInputComponent->BindAction("BarRoll", IE_Pressed, this, &AAsistivnaBall::BarRoll);
	PlayerInputComponent->BindAction("SpawnThrow", IE_Pressed, this, &AAsistivnaBall::SpawnThrow);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AAsistivnaBall::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AAsistivnaBall::TouchStopped);
}

void AAsistivnaBall::MoveRight(float Val)
{
	const FVector Torque = FVector(-1.f * Val * RollTorque, 0.f, 0.f);
	Ball->AddTorqueInRadians(Torque);
}

void AAsistivnaBall::MoveForward(float Val)
{
	const FVector Torque = FVector(0.f, Val * RollTorque, 0.f);
	Ball->AddTorqueInRadians(Torque);	
}

void AAsistivnaBall::Throw()
{
	//bacanje loptice po zraku
	//zasada ce biti parabola
	t = 0;
	T = 0;
	throwFlag = true;
	pocetna_pozicija = GetActorLocation();
	IzracunajKrajnjuPoziciju();
}

void AAsistivnaBall::Roll()
{
	const FVector Torque = FVector(0.f, strength * RollTorque, 0.f);
	Ball->AddTorqueInRadians(Torque);
}

void AAsistivnaBall::BarRoll()
{
	if (BarFaze == 0) {
	}
	else if (BarFaze == 1) {
	}
	else if (BarFaze == 2) {
		const FVector Torque = FVector(0.f, strength * GetBarCounter() * RollTorque, 0.f);
		Ball->AddTorqueInRadians(Torque);
		BarFaze = -3;
	}
	++BarFaze;
}

void AAsistivnaBall::SpawnThrow()
{
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParameters.bNoFail = true;
	SpawnParameters.Owner = this;
	SpawnParameters.Instigator = this;

	FTransform BallSpawnTransform;
	BallSpawnTransform.SetLocation(GetActorForwardVector() * spawnLocation + GetActorLocation());
	BallSpawnTransform.SetRotation(GetActorRotation().Quaternion());
	BallSpawnTransform.SetScale3D(FVector(1.f));

	ABall* ball =  GetWorld()->SpawnActor<ABall>(BallClass, BallSpawnTransform, SpawnParameters);
	ball->SetUpThrowMethod();
}

void AAsistivnaBall::Jump()
{
	if(bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		Ball->AddImpulse(Impulse);
		bCanJump = false;
	}
}

void AAsistivnaBall::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	bCanJump = true;
}

void AAsistivnaBall::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		Ball->AddImpulse(Impulse);
		bCanJump = false;
	}

}

void AAsistivnaBall::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		Ball->AddImpulse(Impulse);
		bCanJump = false;
	}
}

void AAsistivnaBall::IzracunajKrajnjuPoziciju()
{
	float x, y, z;
	float dist = 2000;
	FVector direction = GetActorForwardVector();

	x = pocetna_pozicija.X + dist * direction.X;
	y = pocetna_pozicija.Y + dist * direction.Y;
	z = pocetna_pozicija.Z + dist * direction.Z;
	krajnja_pozicija = FVector(x, y, z);
}

void AAsistivnaBall::Tick(float DeltaTime)
{
	if (throwFlag)
	{
		T = T + GetWorld()->GetDeltaSeconds();
		float x, y, z;
		if (t <= 1)
		{
			t = T / 3;
			x = pocetna_pozicija.X * (1 - t) + krajnja_pozicija.X * t;
			y = pocetna_pozicija.Y * (1 - t) + krajnja_pozicija.Y * t;
			z = strength * FMath::Sin(t * PI) + pocetna_pozicija.Z;

			FVector MoveDirection = FVector(x, y, z);
			SetActorLocation(MoveDirection);
		}
		else
		{
			throwFlag = false;
		}
	}

	//BarCounter = BarCounter < 1 ? BarCounter + DeltaTime : 0;	//ovo mi se ne svidja jer je to anton radio :)
	// moj optimalni kod unistavas

	if (barFlag)
	{
		BarCounter = BarCounter + brzinaBara;
	}
	else
	{
		BarCounter = BarCounter - brzinaBara;
	}

	if (BarCounter >= 1)
	{
		barFlag = false;
	}
	else if (BarCounter <= 0)
	{
		barFlag = true;
	}
	
	if (BarFaze < 0) {
		BarFaze = 0;
	}
	else if (BarFaze == 0) {
		BallLocation = GetActorLocation();
		BallLocation.Y = GetBarCounter() * duljina - polovica_duljine;
		BallLocation.Z = 230;
		SetActorLocation(BallLocation);
	}

	LineAngle += angleSpeed;
	if (LineAngle <= -180 || LineAngle >= 0)
		angleSpeed *= -1;
}

float AAsistivnaBall::GetBarCounter() {
	return BarCounter;
}

int AAsistivnaBall::GetBarFaze() {
	return BarFaze;
}

int AAsistivnaBall::GetLineAngleSpeed() {
	return angleSpeed;
}
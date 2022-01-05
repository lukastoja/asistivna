// Fill out your copyright notice in the Description page of Project Settings.


#include "Ball.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"

// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh"));

	// Create mesh component for the ball
	Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball1"));
	Ball->SetStaticMesh(BallMesh.Object);
	Ball->BodyInstance.SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	Ball->SetSimulatePhysics(true);
	Ball->SetAngularDamping(0.1f);
	Ball->SetLinearDamping(0.1f);
	Ball->BodyInstance.MassScale = 3.5f;
	Ball->BodyInstance.MaxAngularVelocity = 800.0f;
	Ball->SetNotifyRigidBodyCollision(true);
	RootComponent = Ball;

	MaterialBallP1 = CreateDefaultSubobject<UMaterial>("MaterialBallP1");
	MaterialBallP2 = CreateDefaultSubobject<UMaterial>("MaterialBallP2");

	flagRT = false;
	throwFlag = false;
	T = 0;
	t = 0;

	player = true;
}

void ABall::SetUpThrowMethod(FVector lineVector)
{
	t = 0;
	T = 0;
	throwFlag = true;
	pocetna_pozicija = GetActorLocation();
	IzracunajKrajnjuPoziciju(lineVector);
	flagRT = true;
}

void ABall::RollBall(FVector Torque)
{
	Ball->AddTorqueInRadians(Torque);
}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABall::IzracunajKrajnjuPoziciju(FVector lineVector)
{
	float x, y, z;
	float dist = 2000;
	FVector direction = lineVector;

	x = pocetna_pozicija.X + dist * direction.X;
	y = pocetna_pozicija.Y + dist * direction.Y;
	z = pocetna_pozicija.Z + dist * direction.Z;
	krajnja_pozicija = FVector(x, y, z);
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (flagRT) //ako je true onda throw inace roll
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
	} 
}

void ABall::SetUpPlayer(bool p)
{
	player = p;
	if (player)
	{
		Ball->SetMaterial(0, MaterialBallP1);
	}
	else {
		Ball->SetMaterial(0, MaterialBallP2);
	}
}


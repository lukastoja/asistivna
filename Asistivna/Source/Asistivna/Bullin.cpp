// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullin.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"

// Sets default values
ABullin::ABullin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh"));

	// Create mesh component for the ball
	Bullin = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullin1"));
	Bullin->SetStaticMesh(BallMesh.Object);
	Bullin->BodyInstance.SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	Bullin->SetSimulatePhysics(true);
	Bullin->SetAngularDamping(0.1f);
	Bullin->SetLinearDamping(0.1f);
	Bullin->BodyInstance.MassScale = 3.5f;
	Bullin->BodyInstance.MaxAngularVelocity = 800.0f;
	Bullin->SetNotifyRigidBodyCollision(true);
	RootComponent = Bullin;
}

void ABullin::RollBall(FVector Torque)
{
	Bullin->AddTorqueInRadians(Torque);
}

// Called when the game starts or when spawned
void ABullin::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Fill out your copyright notice in the Description page of Project Settings.


#include "VSigne.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Components/BoxComponent.h"
#include "Engine.h"
#include "Components/SceneComponent.h"

// Sets default values
AVSigne::AVSigne()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	LeftV = CreateDefaultSubobject<UStaticMeshComponent>("LeftV");
	RightV = CreateDefaultSubobject<UStaticMeshComponent>("RightV");

	MyBoxComponentL = CreateDefaultSubobject<UBoxComponent>("Box comp L");
	MyBoxComponentR = CreateDefaultSubobject<UBoxComponent>("Box comp R");

	SetRootComponent(SceneComponent);
	LeftV->SetupAttachment(SceneComponent);
	RightV->SetupAttachment(SceneComponent);
	MyBoxComponentL->SetupAttachment(SceneComponent);
	MyBoxComponentR->SetupAttachment(SceneComponent);

	MyBoxComponentL->OnComponentBeginOverlap.AddDynamic(this, &AVSigne::OnOverlapBegin);
	MyBoxComponentR->OnComponentBeginOverlap.AddDynamic(this, &AVSigne::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AVSigne::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVSigne::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AVSigne::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

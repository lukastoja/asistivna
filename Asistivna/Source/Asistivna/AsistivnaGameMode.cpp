// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AsistivnaGameMode.h"
#include "AsistivnaBall.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "Engine.h"
#include "Blueprint/UserWidget.h"
#include "Ball.h"
#include "Bullin.h"

AAsistivnaGameMode::AAsistivnaGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AAsistivnaBall::StaticClass();

	static ConstructorHelpers::FClassFinder<UUserWidget> MainHudClass(TEXT("/Game/Blueprints/widgets/MainMenuWidget"));
	MainHUD = MainHudClass.Class;

	scorep1 = 0;
	scorep2 = 0;
	finalScorep1 = 0;
	finalScorep2 = 0;

	roundOver = false;
	brRunde = 1;
}

void AAsistivnaGameMode::BeginPlay()
{
	Super::BeginPlay();


	UWorld* TheWorld = GetWorld();
	FString CurrentLevel = TheWorld->GetMapName();
	CurrentLevel.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);
	if (CurrentLevel == "MainMenuMap")
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), MainHUD);

		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		PC->bShowMouseCursor = true;
		PC->bEnableClickEvents = true;
		PC->bEnableMouseOverEvents = true;
	}

	scorep1 = 0;
	scorep2 = 0;
}

void AAsistivnaGameMode::PronadjiNajblizuLoptu()
{
	float dist = 9999999999;
	float distE = 9999999999;
	scorep1 = 0;
	scorep2 = 0;
	AActor* ClosestBall = nullptr;
	AActor* nepBall;
	player2.Empty();
	player1.Empty();

	TArray<AActor*> FoundActorsBall;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABall::StaticClass(), FoundActorsBall);

	TArray<AActor*> FoundActorsBullin;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABullin::StaticClass(), FoundActorsBullin);

	for (int i = 0; i < FoundActorsBall.Num(); i++)
	{
		if (Cast<ABall>(FoundActorsBall[i])->player)
		{
			player1.Add(FoundActorsBall[i]);
		}
		else {
			player2.Add(FoundActorsBall[i]);
		}

		FVector locationBall = FoundActorsBall[i]->GetActorLocation();
		FVector locationBullin = FoundActorsBullin[0]->GetActorLocation();
		
		if (FVector::Dist(locationBall, locationBullin) < dist)
		{
			dist = FVector::Dist(locationBall, locationBullin);
			ClosestBall = FoundActorsBall[i];
		}
	}


	//pronaci najblizu loptu od neprijateljskog igraca
	//vidjeti koliko bliziji player ima loptica blizu bullina odnosno na neprijateljsku najblizu lopticu
	if (ClosestBall != nullptr && Cast<ABall>(ClosestBall)->player)
	{
		for (int i = 0; i < player2.Num(); i++)
		{
			FVector locationBall = player2[i]->GetActorLocation();
			FVector locationBullin = FoundActorsBullin[0]->GetActorLocation();

			if (FVector::Dist(locationBall, locationBullin) < distE)
			{
				distE = FVector::Dist(locationBall, locationBullin);
				nepBall = player2[i];
			}
		}

		for (int i = 0; i < player1.Num(); i++)
		{
			FVector locationBall = player1[i]->GetActorLocation();
			FVector locationBullin = FoundActorsBullin[0]->GetActorLocation();

			if (FVector::Dist(locationBall, locationBullin) < distE)
			{
				scorep1++;
			}
		}
	}
	else
	{
		for (int i = 0; i < player1.Num(); i++)
		{
			FVector locationBall = player1[i]->GetActorLocation();
			FVector locationBullin = FoundActorsBullin[0]->GetActorLocation();

			if (FVector::Dist(locationBall, locationBullin) < distE)
			{
				distE = FVector::Dist(locationBall, locationBullin);
				nepBall = player1[i];
			}
		}

		for (int i = 0; i < player2.Num(); i++)
		{
			FVector locationBall = player2[i]->GetActorLocation();
			FVector locationBullin = FoundActorsBullin[0]->GetActorLocation();

			if (FVector::Dist(locationBall, locationBullin) < distE)
			{
				scorep2++;
			}
		}
	}
}

void AAsistivnaGameMode::PobrisiLopte()
{
	TArray<AActor*> FoundActorsBall;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABall::StaticClass(), FoundActorsBall);

	TArray<AActor*> FoundActorsBullin;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABullin::StaticClass(), FoundActorsBullin);

	for (int i = 0; i < FoundActorsBall.Num(); i++)
	{
		FoundActorsBall[i]->Destroy();
	}
	
	FoundActorsBullin[0]->Destroy();
}

void AAsistivnaGameMode::KrajRunde()
{
	PobrisiLopte();
	finalScorep1 += scorep1;
	finalScorep2 += scorep2;
	scorep1 = 0;
	scorep2 = 0;
	++brRunde;
}

int AAsistivnaGameMode::GetScoreP1()
{
	return scorep1;
}

int AAsistivnaGameMode::GetScoreP2()
{
	return scorep2;
}

bool AAsistivnaGameMode::BulinExists()
{
	TArray<AActor*> FoundActorsBullin;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABullin::StaticClass(), FoundActorsBullin);
	if (FoundActorsBullin.Num() > 0) {
		return true;
	}
	return false;
}

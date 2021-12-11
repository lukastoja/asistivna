// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AsistivnaGameMode.h"
#include "AsistivnaBall.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "Engine.h"
#include "Blueprint/UserWidget.h"

AAsistivnaGameMode::AAsistivnaGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AAsistivnaBall::StaticClass();

	static ConstructorHelpers::FClassFinder<UUserWidget> MainHudClass(TEXT("/Game/Blueprints/widgets/MainMenuWidget"));
	MainHUD = MainHudClass.Class;
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

		APlayerController* PC = GetWorld()->GetFirstPlayerController();
		if (PC)
		{
			PC->bShowMouseCursor = true;
			PC->bEnableClickEvents = true;
			PC->bEnableMouseOverEvents = true;
		}
	}
}
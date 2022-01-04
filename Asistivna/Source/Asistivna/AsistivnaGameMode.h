// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AsistivnaGameMode.generated.h"

UCLASS(minimalapi)
class AAsistivnaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAsistivnaGameMode();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainHud", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> MainHUD;

	UPROPERTY(EditAnywhere, Category = "MainHud")
	class UUserWidget* CurrentWidget;

	void PronadjiNajblizuLoptu();

	TArray<AActor*> player1;
	TArray<AActor*> player2;
};




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

	UFUNCTION(BlueprintCallable, Category = "BallDistance")
	void PronadjiNajblizuLoptu();

	UFUNCTION(BlueprintCallable, Category = "ResetMap")
	void PobrisiLopte();

	UFUNCTION(BlueprintCallable, Category = "ResetMap")
	void KrajRunde();

	TArray<AActor*> player1;
	TArray<AActor*> player2;

	UFUNCTION(BlueprintPure, Category = "score")
	int GetScoreP1();

	UFUNCTION(BlueprintPure, Category = "score")
	int GetScoreP2();

	int scorep1;
	int scorep2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "brRunde")
	int brRunde;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "finalscore")
	int finalScorep1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "finalscore")
	int finalScorep2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "finalscore")
	bool roundOver;
};




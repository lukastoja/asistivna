// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullin.generated.h"

UCLASS()
class ASISTIVNA_API ABullin : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullin();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Bullin, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* Bullin;

	void RollBall(FVector Torque);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE class UStaticMeshComponent* GetBall() const { return Bullin; }
};

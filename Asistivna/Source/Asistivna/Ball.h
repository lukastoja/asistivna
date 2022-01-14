// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ball.generated.h"

UCLASS()
class ASISTIVNA_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABall();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* Ball;

	UPROPERTY(EditAnywhere, Category = "Material")
	class UMaterial* MaterialBallP1;

	UPROPERTY(EditAnywhere, Category = "Material")
	class UMaterial* MaterialBallP2;

	UPROPERTY(EditAnywhere, Category = "testStrength")
	int testStrength;


	//flag za odredivanej ce se lopta rollat ili bacat
	bool flagRT;

	float strength;
	float bar;
	
	void SetUpThrowMethod(FVector lineVector, float bar1, float strength1);

	void RollBall(FVector Torque);

	UPROPERTY(EditAnywhere, Category = "player")
	bool player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	bool presaoBox;

	UFUNCTION()
	void DestroyBall();

	UPROPERTY(EditAnywhere, Category = "Components")
	FTimerHandle DestroyHandle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float T;
	float t;
	bool throwFlag;
	FVector pocetna_pozicija;
	FVector krajnja_pozicija;

	void IzracunajKrajnjuPoziciju(FVector lineVector);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE class UStaticMeshComponent* GetBall() const { return Ball; }

	void SetUpPlayer(bool p);
};

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

	//flag za odredivanej ce se lopta rollat ili bacat
	bool flagRT;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float strength;
	
	void SetUpThrowMethod(FVector lineVector);

	void RollBall(FVector Torque);

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
};

// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AsistivnaBall.generated.h"

UCLASS(config=Game)
class AAsistivnaBall : public APawn
{
	GENERATED_BODY()

	/** StaticMesh used for the ball */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* Ball;

	/** Spring arm for positioning the camera above the ball */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

	/** Camera to view the ball */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

public:
	AAsistivnaBall();

	virtual void BeginPlay() override;

	/** Vertical impulse to apply when pressing jump */
	UPROPERTY(EditAnywhere, Category="Ball")
	float JumpImpulse;

	/** Bar counter*/
	UPROPERTY(EditAnywhere, Category = "Bar")
	float BarCounter;

	/** Torque to apply when trying to roll ball */
	UPROPERTY(EditAnywhere, Category="Ball")
	float RollTorque;

	/** Indicates whether we can currently jump, use to prevent double jumping */
	bool bCanJump;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float strength;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float spawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainHud", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> MainHUDClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bar", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> BarHUDClass;

	UPROPERTY(EditAnywhere, Category = "MainHud")
	class UUserWidget* CurrentWidget;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Called to move ball forwards and backwards */
	void MoveForward(float Val);

	//nacin bacanje lopte
	void Throw();
	void Roll();

	void SpawnThrow();

	/** Handle jump action. */
	void Jump();

	// AActor interface
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
	// End of AActor interface

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	float T;
	float t;
	bool throwFlag;
	FVector pocetna_pozicija;
	FVector krajnja_pozicija;

	void IzracunajKrajnjuPoziciju();

	UPROPERTY(EditAnywhere, Category = "BallClass")
	TSubclassOf<class ABall> BallClass;	

public:
	/** Returns Ball subobject **/
	FORCEINLINE class UStaticMeshComponent* GetBall() const { return Ball; }
	/** Returns SpringArm subobject **/
	FORCEINLINE class USpringArmComponent* GetSpringArm() const { return SpringArm; }
	/** Returns Camera subobject **/
	FORCEINLINE class UCameraComponent* GetCamera() const { return Camera; }
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	/** Widget bar. */
	UFUNCTION(BlueprintPure, Category = "Bar")
	float GetBarCounter();
};

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

	UPROPERTY(EditAnywhere, Category = "player")
	bool player;

	/** Bar counter*/
	UPROPERTY(EditAnywhere, Category = "Bar")
	float BarCounter;

	/** Bar faze*/
	UPROPERTY(EditAnywhere, Category = "Bar")
	int BarFaze;

	/** Bar location*/
	UPROPERTY(EditAnywhere, Category = "Bar")
	FVector BallLocation;

	UPROPERTY(EditAnywhere, Category = "Bar")
	float brzinaBara;

	UPROPERTY(EditAnywhere, Category = "Bar")
	float polovica_duljine;

	UPROPERTY(EditAnywhere, Category = "Bar")
	float duljina;

	bool barFlag;

	/** Line angle*/
	UPROPERTY(EditAnywhere, Category = "Line")
	int LineAngle;

	int angleSpeed;
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
	TSubclassOf<class UUserWidget> MainHUD;

	UPROPERTY(EditAnywhere, Category = "MainHud")
	class UUserWidget* CurrentWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "brLopti")
	int brLopti1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "brLopti")
	int brLopti2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "bulin")
	bool firstBall;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Called to move ball forwards and backwards */
	void MoveForward(float Val);

	//nacin bacanje lopte
	void Throw();
	void Roll();
	void BarRoll();

	void SveLopte();
	void ResetMap();

	void SpawnThrow();
	void AfterPlay();

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

	/**line vektor za spawn lopte u pravom smjeru**/
	FVector lineVector;

	void IzracunajKrajnjuPoziciju();

	UPROPERTY(EditAnywhere, Category = "BallClass")
	TSubclassOf<class ABall> BallClass;	

	UPROPERTY(EditAnywhere, Category = "BullinClass")
	TSubclassOf<class ABullin> BullinClass;

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
	/** Bar Faze. */
	UFUNCTION(BlueprintPure, Category = "BarFaze")
	int GetBarFaze();
	UFUNCTION(BlueprintCallable, Category = "BarFaze")
	void IncreaseBarFaze();
	UFUNCTION(BlueprintCallable, Category = "BarFaze")
	void DecreaseBarFaze();

	/** Line Angle. */
	UFUNCTION(BlueprintPure, Category = "LineAngle")
	int GetLineAngleSpeed();

	UFUNCTION(BlueprintCallable, Category = "Line")
	void SetLineVector(FVector VectorLine);

	UFUNCTION(BlueprintCallable, Category = "BallRoll")
	void BallRoll();

	UFUNCTION(BlueprintCallable, Category = "BullinRoll")
	void BullinRoll();

	UFUNCTION(BlueprintCallable, Category = "BallThrow")
	void BallThrow();

	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetPlayer(bool new_player);

	UFUNCTION(BlueprintPure, Category = "Player")
	bool GetPlayer();

	UFUNCTION(BlueprintCallable, Category = "ResetMap")
	void KrajRunde();
};

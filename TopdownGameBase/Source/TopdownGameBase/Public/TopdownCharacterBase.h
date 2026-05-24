// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "TopdownCharacterBase.generated.h"

UCLASS()
class TOPDOWNGAMEBASE_API ATopdownCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATopdownCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArm;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* Camera;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadOnly, Category = "Movement")
	bool bIsRunning = false; // Variable for Check Sprint

	void CallMove(const FVector2D& MovementVector);

	//Server- Action Func.
	UFUNCTION(Server, Reliable)
	void ServerCallSprintStart();
	UFUNCTION(Server, Reliable)
	void ServerCallSprintDone();
	UFUNCTION(Server, Reliable)
	void ServerCallEquip();
};

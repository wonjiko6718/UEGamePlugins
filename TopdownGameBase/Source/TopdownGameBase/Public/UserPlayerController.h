// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "TopdownCharacterBase.h"

#include "UserPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNGAMEBASE_API AUserPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
    AUserPlayerController();

    //Actions Mapping
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputMappingContext* DefaultMappingContext;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* MoveAction;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* JumpAction;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* SprintAction;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* EquipAction;
protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;
    virtual void OnPossess(APawn* aPawn) override;
    virtual void AcknowledgePossession(APawn* P) override;

private:
    UPROPERTY(VisibleAnywhere, Category = "Owner")
    ATopdownCharacterBase* OwnerCharacter;

    void CallMove(const FInputActionValue& Value);
    void CallJump(const FInputActionValue& Value);
    void CallSprintStart(const FInputActionValue& Value);
    void CallSprintDone(const FInputActionValue& Value);
    void CallEquip(const FInputActionValue& Value);



};

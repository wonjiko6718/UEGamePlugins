// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "UserPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNGAMEBASE_API AUserPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputMappingContext* DefaultMappingContext;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* MoveAction;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
    UInputAction* JumpAction;

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

private:
    void Move(const FInputActionValue& Value);
    void OnJump(const FInputActionValue& Value);


};

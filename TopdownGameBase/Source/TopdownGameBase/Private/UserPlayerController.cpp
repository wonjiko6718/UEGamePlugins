// Fill out your copyright notice in the Description page of Project Settings.


#include "UserPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/Character.h"

void AUserPlayerController::BeginPlay()
{
    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        Subsystem->AddMappingContext(DefaultMappingContext, 0);
    }
}

void AUserPlayerController::SetupInputComponent()
{
    if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(InputComponent))
    {
        EIC->BindAction(JumpAction, ETriggerEvent::Started, this, &AUserPlayerController::OnJump);
        EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AUserPlayerController::Move);
    }
}

void AUserPlayerController::Move(const FInputActionValue& Value)
{
    FVector2D MovementVector = Value.Get<FVector2D>();
}
void AUserPlayerController::OnJump(const FInputActionValue& Value)
{
    if (ACharacter* TempChar = Cast<ACharacter>(GetPawn()))
    {
        TempChar->Jump();
    }
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "UserPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AUserPlayerController::AUserPlayerController()
{
    ///Script/EnhancedInput.InputMappingContext'/TopdownGameBase/Input/UserIMC.UserIMC'
    static ConstructorHelpers::FObjectFinder<UInputMappingContext> IMC
    (TEXT("/TopdownGameBase/Input/UserIMC.UserIMC"));
    if (IMC.Succeeded()) DefaultMappingContext = IMC.Object;

    ///Script/EnhancedInput.InputAction'/TopdownGameBase/Input/IA/IA_Move.IA_Move'
    static ConstructorHelpers::FObjectFinder<UInputAction> IA_Move
    (TEXT("/TopdownGameBase/Input/IA/IA_Move.IA_Move"));
    if (IA_Move.Succeeded()) MoveAction = IA_Move.Object;

    ///Script/EnhancedInput.InputAction'/TopdownGameBase/Input/IA/IA_Jump.IA_Jump'
    static ConstructorHelpers::FObjectFinder<UInputAction> IA_Jump
    (TEXT("/TopdownGameBase/Input/IA/IA_Jump.IA_Jump"));
    if (IA_Jump.Succeeded()) JumpAction = IA_Jump.Object;
    ///Script/EnhancedInput.InputAction'/TopdownGameBase/Input/IA/IA_Sprint.IA_Sprint'
    static ConstructorHelpers::FObjectFinder<UInputAction> IA_Sprint
    (TEXT("/TopdownGameBase/Input/IA/IA_Sprint.IA_Sprint"));
    if (IA_Sprint.Succeeded()) SprintAction = IA_Sprint.Object;
}
void AUserPlayerController::OnPossess(APawn* aPawn)
{
    Super::OnPossess(aPawn);
    OwnerCharacter = Cast<ATopdownCharacterBase>(aPawn);
    if (OwnerCharacter)
    {
        OwnerCharacter->SetOwner(this);
    }
    UE_LOG(LogTemp, Warning, TEXT("OnPossess: %s"), OwnerCharacter ? TEXT("Success") : TEXT("NULL"));
}

void AUserPlayerController::AcknowledgePossession(APawn* P)
{
    Super::AcknowledgePossession(P);
    OwnerCharacter = Cast<ATopdownCharacterBase>(P);

}

void AUserPlayerController::BeginPlay()
{
    Super::BeginPlay();
    if (!IsLocalController()) return;
    if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        Subsystem->AddMappingContext(DefaultMappingContext, 0);
    }
}

void AUserPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(InputComponent))
    {
        EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AUserPlayerController::CallMove);
        EIC->BindAction(JumpAction, ETriggerEvent::Started, this, &AUserPlayerController::CallJump);
        EIC->BindAction(SprintAction, ETriggerEvent::Started, this, &AUserPlayerController::CallSprintStart);
        EIC->BindAction(SprintAction, ETriggerEvent::Completed, this, &AUserPlayerController::CallSprintDone);
        EIC->BindAction(EquipAction, ETriggerEvent::Started, this, &AUserPlayerController::CallEquip);

    }
}
void AUserPlayerController::CallMove(const FInputActionValue& Value)
{
    //UE_LOG(LogTemp, Warning, TEXT("CallMove triggered, OwnerCharacter: %s"), OwnerCharacter ? TEXT("Valid") : TEXT("NULL"));
    if (!OwnerCharacter) return;
    FVector2D MovementVector = Value.Get<FVector2D>();
    OwnerCharacter->CallMove(MovementVector);
}
void AUserPlayerController::CallJump(const FInputActionValue& Value)
{
    if (!OwnerCharacter) return;
    OwnerCharacter->Jump();
}
void AUserPlayerController::CallSprintStart(const FInputActionValue& Value)
{
    if (!OwnerCharacter) return;
    OwnerCharacter->ServerCallSprintStart();

}
void AUserPlayerController::CallSprintDone(const FInputActionValue& Value)
{
    if (!OwnerCharacter) return;
    OwnerCharacter->ServerCallSprintDone();
}

void AUserPlayerController::CallEquip(const FInputActionValue& Value)
{
    if (!OwnerCharacter) return;
    OwnerCharacter->ServerCallEquip();
}

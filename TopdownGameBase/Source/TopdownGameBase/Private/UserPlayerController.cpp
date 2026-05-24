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
}
void AUserPlayerController::OnPossess(APawn* aPawn)
{
    Super::OnPossess(aPawn);
    OwnerCharacter = Cast<ATopdownCharacterBase>(aPawn);
}

void AUserPlayerController::BeginPlay()
{
    Super::BeginPlay();
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
        EIC->BindAction(JumpAction, ETriggerEvent::Started, this, &AUserPlayerController::OnJump);
        EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AUserPlayerController::Move);
    }
}
void AUserPlayerController::Move(const FInputActionValue& Value)
{
    if (!OwnerCharacter) return;
    FVector2D MovementVector = Value.Get<FVector2D>();
    OwnerCharacter->Move(MovementVector);
}
void AUserPlayerController::OnJump(const FInputActionValue& Value)
{

}
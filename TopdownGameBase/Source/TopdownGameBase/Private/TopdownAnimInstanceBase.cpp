// Fill out your copyright notice in the Description page of Project Settings.


#include "TopdownAnimInstanceBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"

void UTopdownAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
    OwnerCharacter = Cast<ATopdownCharacterBase>(GetOwningActor());
    if (!OwnerCharacter) return;

    Speed = OwnerCharacter->GetCharacterMovement()->Velocity.Size2D();
    bIsInAir = OwnerCharacter->GetCharacterMovement()->IsFalling();
    bIsRunning = OwnerCharacter->bIsRunning;
    UE_LOG(LogTemp, Warning, TEXT("Speed: %f"), Speed);
}

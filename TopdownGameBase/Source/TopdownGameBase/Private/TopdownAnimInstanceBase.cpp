// Fill out your copyright notice in the Description page of Project Settings.


#include "TopdownAnimInstanceBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"

void UTopdownAnimInstanceBase::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
    ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwningActor());
    if (!OwnerCharacter) return;

    // 속도 계산 (수평 속도만)
    Speed = OwnerCharacter->GetCharacterMovement()->Velocity.Size2D();
    bIsInAir = OwnerCharacter->GetCharacterMovement()->IsFalling();
}

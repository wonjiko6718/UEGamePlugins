// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TopdownAnimInstanceBase.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNGAMEBASE_API UTopdownAnimInstanceBase : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float Speed = 0.f;
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsInAir = false;

};

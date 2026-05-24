// Fill out your copyright notice in the Description page of Project Settings.


#include "TopdownCharacterBase.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ATopdownCharacterBase::ATopdownCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NetUpdateFrequency = 60.f;
	MinNetUpdateFrequency = 30.f;

	SpringArm = CreateDefaultSubobject <USpringArmComponent>(TEXT("SpringArm"));
	Camera = CreateDefaultSubobject <UCameraComponent>(TEXT("Camera"));

	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);

	SpringArm->TargetArmLength = 800.0f;
	SpringArm->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	SpringArm->SetRelativeLocation(FVector(0.f, 0.f, 100.f)); // ← Z 올려주기
	SpringArm->bUsePawnControlRotation = false;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bDoCollisionTest = false;
	this->bUseControllerRotationYaw = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
}

// Called when the game starts or when spawned
void ATopdownCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("[%s] BeginPlay / Owner: %s / LocalRole: %d"),
		HasAuthority() ? TEXT("SERVER") : TEXT("CLIENT"),
		GetOwner() ? *GetOwner()->GetName() : TEXT("NULL"),
		(int32)GetLocalRole());
}
// Called every frame
void ATopdownCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
// Called to bind functionality to input
void ATopdownCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void ATopdownCharacterBase::CallMove(const FVector2D& MovementVector)
{
	const FVector ForwardDirection = FVector(1.f, 0.f, 0.f);
	const FVector RightDirection = FVector(0.f, 1.f, 0.f);

	AddMovementInput(ForwardDirection, MovementVector.Y);
	AddMovementInput(RightDirection, MovementVector.X);
}
void ATopdownCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const // Server Replicated Variables
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ATopdownCharacterBase, bIsRunning);
}
void ATopdownCharacterBase::ServerCallSprintStart_Implementation()
{
	bIsRunning = true;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}
void ATopdownCharacterBase::ServerCallSprintDone_Implementation()
{
	bIsRunning = false;
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
}
void ATopdownCharacterBase::ServerCallEquip_Implementation()
{

}


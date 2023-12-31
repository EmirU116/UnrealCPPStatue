// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyPawn::Move(FVector2D AxisInput)
{
	auto MoveVector = FVector(AxisInput.X, AxisInput.Y, 0.f);

	auto TransformedVector = UKismetMathLibrary::TransformDirection(
		GetActorTransform(),
		MoveVector);

	auto deltaTime = GetWorld() -> GetDeltaSeconds();
	
	MoveVector *= moveSpeed;

	SetActorLocation(
		GetActorLocation()
		+ MoveVector * deltaTime);
}


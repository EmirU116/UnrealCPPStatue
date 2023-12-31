// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <Components/BoxComponent.h>
#include "MyPawn.generated.h"


UCLASS()
class STATUECPP_API AMyPawn : public APawn
{
	GENERATED_BODY()

/*
	UPROPERTY()
		UBoxComponent* boxCollision = CreateDefaultSubobject<UBoxComponent>(FName("Collision Mesh"));
*/

public:
	// Sets default values for this pawn's properties
	AMyPawn();

	UFUNCTION(BlueprintCallable)
	void Move(FVector2D AxisInput);
	 
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float moveSpeed = 350.f;
};

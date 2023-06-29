// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpinningComponent.h"
#include "SpinningActor.generated.h"

UCLASS()
class STATUECPP_API ASpinningActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpinningActor();

	// Pointer to the component 
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		USpinningComponent* Rotator;
};

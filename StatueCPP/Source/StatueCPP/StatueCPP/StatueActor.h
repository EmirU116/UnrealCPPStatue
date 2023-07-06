// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPickUpInterface.h"
#include "GameFramework/Actor.h"
#include "StatueActor.generated.h"

UCLASS()
class STATUECPP_API AStatueActor : public AActor, public IMyPickUpInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AStatueActor();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Pickup(); virtual void Pickup_Implementation();
};
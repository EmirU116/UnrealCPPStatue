// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPickUpInterface.generated.h"

/**
 * 
 */
UINTERFACE(MinimalAPI, BlueprintType)
class UMyPickUpInterface : public UInterface
{
	GENERATED_BODY()
};

class STATUECPP_API IMyPickUpInterface 
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Prop")
		void PickedUp();
};
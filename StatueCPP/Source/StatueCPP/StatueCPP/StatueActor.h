// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPickUpInterface.h"
#include "GameFramework/Actor.h"
#include "../StatueCPPGameMode.h"
#include "StatueActor.generated.h"

UCLASS()
class STATUECPP_API AStatueActor : public AActor
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AStatueActor();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Interact(); virtual void Interact_Implementation();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	AStatueCPPGameMode* GameMode;


};
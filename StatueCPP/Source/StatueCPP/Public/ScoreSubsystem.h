// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "../StatueCPPGameMode.h"
#include "ScoreSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class STATUECPP_API UScoreSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

private:
	int32 CurrentScore;
public:
	UScoreSubsystem();

	UFUNCTION()
	void AddScore();

	int32 GetScore() { return CurrentScore; }
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreSubsystem.h"

void UScoreSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	GEngine->AddOnScreenDebugMessage(-1, 8, FColor::Emerald, "Score SubSystem is alive");
}

void UScoreSubsystem::AddScore()
{
	CurrentScore++;	//increment
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "StatueActor.h"

void AStatueActor::BeginPlay()
{
	Super::BeginPlay();

	
}

// Sets default values
AStatueActor::AStatueActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AStatueActor::Pickup_Implementation()
{
	// This is basically Print String in blueprint
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,FString("OHOHO, Interaction i see"));
}




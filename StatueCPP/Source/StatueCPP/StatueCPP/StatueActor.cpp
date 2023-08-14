// Fill out your copyright notice in the Description page of Project Settings.


#include "StatueActor.h"

// Sets default values
AStatueActor::AStatueActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AStatueActor::Interact_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, TEXT("It Interacted"));
}

void AStatueActor::BeginPlay()
{
	Super::BeginPlay();
}





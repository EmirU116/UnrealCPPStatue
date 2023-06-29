// Fill out your copyright notice in the Description page of Project Settings.


#include "SpinningActor.h"

// Sets default values
ASpinningActor::ASpinningActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Adding component to the actor
	Rotator = CreateDefaultSubobject<USpinningComponent>(TEXT("Rotator"));
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "SpinningComponent.h"

// Sets default values for this component's properties
USpinningComponent::USpinningComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
// Called every frame
void USpinningComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	// variable for getting the owner of the component
	auto owner = GetOwner();

	// setting up how the actor should rotate
	auto rotation = FRotator(0, SpinningSpeed * DeltaTime, 0);

	// pointer to a rotation funciton
	owner->AddActorLocalRotation(rotation);
}


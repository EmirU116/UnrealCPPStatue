// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomMoveComponent.h"
#include "Kismet/KismetMathLibrary.h"


void URandomMoveComponent::RandomMove()
{
	// gets a reference to the owner
	auto Owner = GetOwner();

	// making location random / making random unit vector, length of 1
	FVector RandomUnitVector = UKismetMathLibrary::RandomUnitVector();
	RandomUnitVector.Z = 0.f;

	// new location	( creates a local space vector )
	const FVector RandomLocation = RandomUnitVector * Radius;
	
	//Setting location for the owner
	Owner->SetActorLocation(Owner->GetActorLocation() + RandomLocation);	// gets new random location
}
// Sets default values for this component's properties
URandomMoveComponent::URandomMoveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called every frame
void URandomMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	Timer += DeltaTime;		// +1 


	// if timer is greater then 30
	if (Timer > Interval) 
	{
		Timer -= Interval;		// reset timer to 0?
		RandomMove();		// set a new random location for the actor
	}
}


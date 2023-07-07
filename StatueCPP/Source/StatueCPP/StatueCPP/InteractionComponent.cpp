// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionComponent.h"

#include "MyPickUpInterface.h"

// Sets default values for this component's properties
UInteractionComponent::UInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	TraceSphere = FCollisionShape::MakeSphere(Radius);

	// ...
}
// Called every frame
void UInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	const AActor* Owner = GetOwner();

	TArray<FOverlapResult> CandidateActors;

	//Find nearby actors
	GetWorld()->OverlapMultiByChannel(CandidateActors,
		Owner->GetActorLocation(),
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel1,	// overlap trace will only be done on object in that channel
		TraceSphere
		);
	
	// Loop throught found actors
	for (int i = 0; i<CandidateActors.Num(); i++)
	{
		// Call the interface on all collected actors
		AActor*  ActorReference = CandidateActors[i].GetActor();

		if (ActorReference -> Implements<UMyPickUpInterface>())
		{
			IMyPickUpInterface::Execute_PickUp(ActorReference);
		}
	}
}


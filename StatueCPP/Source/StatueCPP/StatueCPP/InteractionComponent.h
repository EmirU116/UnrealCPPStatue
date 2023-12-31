// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATUECPP_API UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	FCollisionShape TraceSphere;
public:	
	// Sets default values for this component's properties
	UInteractionComponent();

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float Radius;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};

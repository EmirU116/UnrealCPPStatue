// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RandomMoveComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STATUECPP_API URandomMoveComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URandomMoveComponent();

private:
	float Timer;

	UFUNCTION()
		void RandomMove();
public:	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Radius = 100.f;


	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Interval = 30.f;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};

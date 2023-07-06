 // Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StatueCPPGameMode.generated.h"

UCLASS(minimalapi)
class AStatueCPPGameMode : public AGameModeBase
{
	GENERATED_BODY()
private:
	int32 CurrentScore;
public:
	AStatueCPPGameMode();

	UFUNCTION()
	void AddScore();

	int32 GetScore() { return CurrentScore; }
};




 // Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StatueCPPGameMode.generated.h"

UCLASS()
class AStatueCPPGameMode : public AGameModeBase
{
	GENERATED_BODY()

	AStatueCPPGameMode();

protected:
	virtual void BeginPlay() override;
};




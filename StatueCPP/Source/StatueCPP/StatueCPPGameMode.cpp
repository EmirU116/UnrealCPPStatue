// Copyright Epic Games, Inc. All Rights Reserved.

#include "StatueCPPGameMode.h"
#include "StatueCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStatueCPPGameMode::AStatueCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AStatueCPPGameMode::AddScore()
{
	CurrentScore++;			// incrementing
}

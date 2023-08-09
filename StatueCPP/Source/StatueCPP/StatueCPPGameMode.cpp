// Copyright Epic Games, Inc. All Rights Reserved.

#include "StatueCPPGameMode.h"
#include "StatueCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStatueCPPGameMode::AStatueCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Statue/BP_Player"));
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerPlayerControllerBPClass(TEXT("/Game/Statue/BP_PlayerController"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
		PlayerControllerClass = PlayerPlayerControllerBPClass.Class;
	}
}

void AStatueCPPGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("Begin play is running !"));	
	}
	
}

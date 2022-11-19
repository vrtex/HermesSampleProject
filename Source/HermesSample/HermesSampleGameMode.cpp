// Copyright Epic Games, Inc. All Rights Reserved.

#include "HermesSampleGameMode.h"
#include "HermesSampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHermesSampleGameMode::AHermesSampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "MagicKnightGameMode.h"
#include "../Player/MagicKnightCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMagicKnightGameMode::AMagicKnightGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

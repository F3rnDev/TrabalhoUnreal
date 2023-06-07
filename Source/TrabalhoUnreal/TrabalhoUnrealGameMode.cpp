// Copyright Epic Games, Inc. All Rights Reserved.

#include "TrabalhoUnrealGameMode.h"
#include "TrabalhoUnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATrabalhoUnrealGameMode::ATrabalhoUnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

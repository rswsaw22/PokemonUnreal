// Copyright Epic Games, Inc. All Rights Reserved.

#include "PokemonGameBuilderGameMode.h"
#include "PokemonGameBuilderCharacter.h"
#include "UObject/ConstructorHelpers.h"

APokemonGameBuilderGameMode::APokemonGameBuilderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

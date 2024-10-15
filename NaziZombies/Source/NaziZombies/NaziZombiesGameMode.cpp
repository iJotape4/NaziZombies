// Copyright Epic Games, Inc. All Rights Reserved.

#include "NaziZombiesGameMode.h"
#include "NaziZombiesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANaziZombiesGameMode::ANaziZombiesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

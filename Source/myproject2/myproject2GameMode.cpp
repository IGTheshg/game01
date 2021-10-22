// Copyright Epic Games, Inc. All Rights Reserved.

#include "myproject2GameMode.h"
#include "myproject2Character.h"
#include "UObject/ConstructorHelpers.h"

Amyproject2GameMode::Amyproject2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

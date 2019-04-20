// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ShootOrDieGameMode.h"
#include "ShootOrDieHUD.h"
#include "ShootOrDieCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootOrDieGameMode::AShootOrDieGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShootOrDieHUD::StaticClass();
}

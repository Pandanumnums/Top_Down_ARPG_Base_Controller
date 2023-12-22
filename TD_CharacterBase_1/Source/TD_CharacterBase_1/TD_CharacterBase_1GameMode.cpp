// Copyright Epic Games, Inc. All Rights Reserved.

#include "TD_CharacterBase_1GameMode.h"
#include "TD_CharacterBase_1PlayerController.h"
#include "TD_CharacterBase_1Character.h"
#include "UObject/ConstructorHelpers.h"

ATD_CharacterBase_1GameMode::ATD_CharacterBase_1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATD_CharacterBase_1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}
// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AsistivnaGameMode.h"
#include "AsistivnaBall.h"

AAsistivnaGameMode::AAsistivnaGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AAsistivnaBall::StaticClass();
}

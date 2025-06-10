// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_BuilderGameMode.h"
#include "BomberMan_BuilderCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABomberMan_BuilderGameMode::ABomberMan_BuilderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberMan_BuilderGameMode::BeginPlay()
{
	Super::BeginPlay();

	Director = GetWorld()->SpawnActor<ADirector>(ADirector::StaticClass());
	ALaberintoConcreto* Builder = GetWorld()->SpawnActor<ALaberintoConcreto>(ALaberintoConcreto::StaticClass());

	if (Director && Builder)
	{
		Builder->Reset();
		Director->SeleccionarLaberinto(Builder);
		Director->ConstruirLaberinto();
		Laberinto_1 = Director->ObtenerLaberinto();
	}
}

void ABomberMan_BuilderGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

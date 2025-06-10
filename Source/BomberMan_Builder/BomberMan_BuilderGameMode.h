// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Director.h"
#include "LaberintoConcreto.h"
#include "BomberMan_BuilderGameMode.generated.h"

class ALaberinto;
UCLASS(minimalapi)
class ABomberMan_BuilderGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan_BuilderGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	ADirector* Director;

	ALaberinto* Laberinto_1;
	TArray<ALaberinto*>Laberinto;
};




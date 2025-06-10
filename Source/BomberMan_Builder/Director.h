// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "IPlanosLaberinto.h"
#include "Director.generated.h"

UCLASS()
class BOMBERMAN_BUILDER_API ADirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:

	IILaberintoBuilder* LaberintoBuilder;
	class Laberinto* Laberinto;

public:

	//void SetBuilder();
	void SeleccionarLaberinto(IILaberintoBuilder* NewBuilder);
	//void SeleccionarLaberinto(IILaberinto* Builder);
	void ConstruirLaberinto();
	//void Modificar();
	class ALaberinto* ObtenerLaberinto() const;

};

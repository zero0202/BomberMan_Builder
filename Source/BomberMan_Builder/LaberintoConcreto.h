// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "LaberintoConcreto.generated.h"

UCLASS()
class BOMBERMAN_BUILDER_API ALaberintoConcreto : public AActor, public IILaberintoBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberintoConcreto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	// Clases para instanciar objetos
	UPROPERTY(EditAnywhere)
	TSubclassOf<ABloqueAcero> BloqueA;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABloqueMadera> BloqueM;

	

public:

	float Espaciado = 260.0f;
	int columnas = 12;
	int filas = 13;


	UPROPERTY()
	ALaberinto* Laberinto;

	TArray<TArray<int32>> MapaBordes={
	{1,1,1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1},
	};
	TArray<TArray<int32>> MapaInteriorM = {
	{0,0,0,0,0,0,0,0,0,0,0,0},
	{0,2,0,2,0,2,0,2,0,2,0,0},
	{0,2,0,2,0,2,0,2,0,2,0,0},
	{0,0,2,0,2,0,2,0,2,0,2,0},
	{0,2,0,2,0,2,0,2,0,2,0,0},
	{0,2,0,2,0,2,0,2,0,2,0,0},
	{0,0,2,0,2,0,2,0,2,0,2,0},
	{0,2,0,2,0,2,0,2,0,2,0,0},
	{0,2,0,2,0,2,0,2,0,2,0,0},
	{0,0,2,0,2,0,2,0,2,0,2,0},
	{0,2,0,2,0,2,0,2,0,2,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0}
	};
	

	TArray<TArray<int32>> MapaLaberintoC = {
	{0,0,0,0,0,0,0,0,0,0,0,0},
	{0,1,0,2,0,1,0,2,0,3,0,0},
	{0,2,0,1,0,2,0,1,0,2,0,0},
	{0,0,2,0,1,0,2,0,1,0,2,0},
	{0,2,0,1,0,2,0,1,0,2,0,0},
	{0,1,0,2,0,1,0,2,0,1,0,0},
	{0,0,2,0,3,0,1,0,2,0,1,0},
	{0,2,0,1,0,2,0,1,0,2,0,0},
	{0,1,0,2,0,1,0,2,0,1,0,0},
	{0,0,2,0,1,0,2,0,3,0,2,0},
	{0,2,0,1,0,2,0,1,0,2,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0}
	};

public:

	virtual void Reset() override;
	virtual void BuildBordes() override;
	virtual void BuildInterior() override;
	virtual void BuildCompleto() override;
	virtual  ALaberinto* ObtenerLaberinto() override;

};

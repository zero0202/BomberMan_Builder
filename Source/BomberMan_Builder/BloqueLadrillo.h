// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueLadrillo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_BUILDER_API ABloqueLadrillo : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueLadrillo();

protected:

	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;

public:

	bool PuedeSubir;
	float velocidad;
	float amplitud;
	float PosicionInicial;
};

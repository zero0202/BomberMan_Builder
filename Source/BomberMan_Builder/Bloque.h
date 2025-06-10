// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

class UStaticMeshComponent;
class UParticleSystemComponent;
UCLASS()
class BOMBERMAN_BUILDER_API ABloque : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//malla del bloque
	UPROPERTY()
	UStaticMeshComponent* MeshBloque;
	UPROPERTY()
	UParticleSystemComponent* Particulas;


public:
	bool bDestruible = true;

	virtual void AjustarTamano(FVector NuevoTamano);

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueHongo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_BUILDER_API ABloqueHongo : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloqueHongo();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Funci�n para detectar colisi�n con el personaje
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};

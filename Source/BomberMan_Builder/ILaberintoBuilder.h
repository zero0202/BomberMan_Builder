// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ILaberintoBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UILaberintoBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_BUILDER_API IILaberintoBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void Reset() = 0;
	virtual void BuildBordes() = 0;
	virtual void BuildInterior() = 0;
	virtual void BuildCompleto() = 0;
	virtual class ALaberinto* ObtenerLaberinto() = 0;

};

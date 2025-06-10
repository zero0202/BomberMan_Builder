// Fill out your copyright notice in the Description page of Project Settings.


#include "Director.h"
#include "LaberintoConcreto.h"
#include "Laberinto.h"
#include "Engine/Engine.h"

// Sets default values
ADirector::ADirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirector::SeleccionarLaberinto(IILaberintoBuilder* NewBuilder)
{
	LaberintoBuilder = NewBuilder;
}

void ADirector::ConstruirLaberinto()
{
	if (!LaberintoBuilder) return;

	LaberintoBuilder->BuildBordes();
	//LaberintoBuilder->BuildInterior();
	LaberintoBuilder->BuildCompleto();


}

ALaberinto* ADirector::ObtenerLaberinto() const
{
	if (LaberintoBuilder)
	{
		return LaberintoBuilder->ObtenerLaberinto();
	}
	else
	{
		return nullptr;
	}
}


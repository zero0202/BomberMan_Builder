// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Para la creacion de la malla 
	MeshBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBloque"));
	MeshBloque->SetupAttachment(RootComponent);
	RootComponent = MeshBloque;

	//Para las particulas
	Particulas = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particulas"));
	Particulas->SetupAttachment(RootComponent);

	// Establecer el tama�o inicial del bloque
	AjustarTamano(FVector(2.5f, 2.5f, 3.0f));

}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloque::AjustarTamano(FVector NuevoTamano)
{
	MeshBloque->SetWorldScale3D(NuevoTamano);
}


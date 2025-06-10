// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAcero.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystemComponent.h"

ABloqueAcero::ABloqueAcero()
{
	PrimaryActorTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueAcero(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMeshBloqueAcero.Succeeded())
	{
		MeshBloque->SetStaticMesh(ObjetoMeshBloqueAcero.Object);

		MeshBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	//para asignar textura
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueAceroMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Panel.M_Tech_Panel'"));
	if (ObjetoBloqueAceroMaterial.Succeeded())
	{
		MeshBloque->SetMaterial(0, ObjetoBloqueAceroMaterial.Object);

	}

	//velocidad = 0.5f;
	bDestruible = false;

}

void ABloqueAcero::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueAcero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*
	FVector NewLocation = GetActorLocation();
	float TimeOffset = GetActorLocation().X * 4.0f;  // Desfase para efecto de ola

	// Movimiento en forma circular
	float DeltaHeight = FMath::Sin(GetWorld()->GetTimeSeconds() * velocidad + TimeOffset) * 5.0f; // Oscilaci�n en Z
	float DeltaX = FMath::Sin(GetWorld()->GetTimeSeconds() * velocidad) * 3.0f; // Oscilaci�n en X
	float DeltaY = FMath::Cos(GetWorld()->GetTimeSeconds() * velocidad) * 3.0f; // Oscilaci�n en Y

	NewLocation.Z = 5.0f + DeltaHeight; // Altura de la ola
	NewLocation.X += DeltaX; // Movimiento en X
	NewLocation.Y += DeltaY; // Movimiento en Y

	SetActorLocation(NewLocation);
	*/
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueMadera.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystemComponent.h"

ABloqueMadera::ABloqueMadera()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshBloqueMadera(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (ObjetoMeshBloqueMadera.Succeeded())
	{
		MeshBloque->SetStaticMesh(ObjetoMeshBloqueMadera.Object);
		MeshBloque->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	//para asignar textura al bloque
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueMaderaMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Oak.M_Wood_Oak'"));
	if (ObjetoBloqueMaderaMaterial.Succeeded())
	{
		MeshBloque->SetMaterial(0, ObjetoBloqueMaderaMaterial.Object);
	}

	// Inicializar variables
	MoverBloque = true;
	bAbriendo = false;
	VelocidadMovimiento = 100.0f; // Velocidad de movimiento
	DistanciaApertura = 200.0f;   // Distancia m�xima de apertura
	PosicionInicial = FVector::ZeroVector; // Se inicializar� en BeginPlay


	bDestruible = true;

}

void ABloqueMadera::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation(); // Guardar la posici�n inicial
}

void ABloqueMadera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MoverBloque) {
		// Obtener la posici�n actual del bloque
		FVector NuevaPosicion = GetActorLocation();

		// Mover hacia la derecha (abrir) o hacia la izquierda (cerrar) seg�n el estado
		if (bAbriendo)
		{
			// Mover hacia la derecha (abrir)
			NuevaPosicion.X += VelocidadMovimiento * DeltaTime;
			if (NuevaPosicion.X >= PosicionInicial.X + DistanciaApertura)
			{
				bAbriendo = false; // Cambiar direcci�n a cerrar
			}
		}
		else
		{
			// Mover hacia la izquierda (cerrar)
			NuevaPosicion.X -= VelocidadMovimiento * DeltaTime;
			if (NuevaPosicion.X <= PosicionInicial.X)
			{
				bAbriendo = true; // Cambiar direcci�n a abrir
			}
		}

		// Aplicar la nueva posici�n
		SetActorLocation(NuevaPosicion);
	}
}






// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoConcreto.h"
#include "Laberinto.h"
#include "BloqueAcero.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "BloqueHongo.h"

// Sets default values
ALaberintoConcreto::ALaberintoConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

// Called when the game starts or when spawned
void ALaberintoConcreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaberintoConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ALaberintoConcreto::Reset()
{
	if (Laberinto)
	{
		Laberinto->Destroy();
		Laberinto = nullptr;
	}

	Laberinto = GetWorld()->SpawnActor<ALaberinto>(ALaberinto::StaticClass());
	//Laberinto->InicializarMapas(MapaBloques, MapaPuertas, MapaObstaculos);
	//Laberinto->SetBuilder(this);
}

void ALaberintoConcreto::BuildBordes()
{
	for (int x = 0; x < MapaBordes.Num(); ++x)
	{
		for (int y = 0; y < MapaBordes[x].Num(); ++y)
		{
			if (MapaBordes[x][y]==1)
			{
				FVector Pos(x * Espaciado, y * Espaciado, 0.0f);
				GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), Pos, FRotator::ZeroRotator);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Borde creado"));
			}
		}
	}
}

void ALaberintoConcreto::BuildInterior()
{
	for (int y = 0; y < MapaInteriorM.Num(); y++)
	{
		for (int x = 0; x < MapaInteriorM[y].Num(); x++)
		{
			if (MapaInteriorM[y][x] == 2)
			{
				FVector Pos(x * Espaciado, y * Espaciado, 0.0f);
				GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), Pos, FRotator::ZeroRotator);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Interior creado"));
			}
		}
	}
}

void ALaberintoConcreto::BuildCompleto()
{
	for (int y = 0; y < MapaLaberintoC.Num(); y++)
	{
		for (int x = 0; x < MapaLaberintoC[y].Num(); x++)
		{
			FVector Pos(x * Espaciado, y * Espaciado, 0.0f);
			int32 valor = MapaLaberintoC[y][x];

			switch (valor)
			{
			case 1:
				GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), Pos, FRotator::ZeroRotator);
				break;
			case 2:
				GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), Pos, FRotator::ZeroRotator);
				break;
			case 3:
				GetWorld()->SpawnActor<ABloqueHongo>(ABloqueHongo::StaticClass(), Pos, FRotator::ZeroRotator);
				break;
			default:
				break;
			}
		}
	}
}



ALaberinto* ALaberintoConcreto::ObtenerLaberinto()
{
	return Laberinto;
}





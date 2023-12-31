// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_USFX_LAB02GameModeBase.generated.h"

/**
 *
 */
class AZombie;
class AZombieComun;
class APlant;
class APlanta_Ataque;
class ALanza_Guisantes;

class APocion;

UCLASS()
class PVZ_USFX_LAB02_API APVZ_USFX_LAB02GameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:
	// Sets default values for this actor's properties
	APVZ_USFX_LAB02GameModeBase();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FTimerHandle Temporizador;

	void Spawn();

	FVector contador;


	int contador2;


	FVector localizacion;

	//Array de Plantas Mutantes
	TArray<APlant*> ArrayPlantasMutantes;
	//Array de Plantas defensa Especiales
	TArray<APlant*> ArrayPlantasEspeciales;


	const float MaxDistance=0.7f;

	// Declarar un vector de objetos
	TArray<AZombie*> ArrayZombies;

	TArray<APlant*> ArrayPlantas;

	// Declarar un contenedor tipo TMap de objetos
	TMap<FString, APlant*> Plantas;

	// Declarar un vector de objetos

	TArray<APlant*> Plantas2;

	float TiempoTranscurrido;

	void aumentovelocidad();

	void MostrarEnergiaDePlantas();


	AZombieComun* NuevoZombie;


	/*APocionSalud* NuevaPocionSalud;
	APocionVelocidad* NuevaPocionVelocidad;
	APocionVeneno* NuevaPocionVeneno;
	APocionLentitud* NuevaPocionLentitud;*/




	FTimerHandle Temporizador2;

	FString NombrePlanta;

	ALanza_Guisantes* NuevaPlantaGuisante;



	int FilaActual;
	int ColumnaActual;

	TArray<class ACrece_planta*> Plantss;  // Almacena todas las instancias de plantas en el juego
};


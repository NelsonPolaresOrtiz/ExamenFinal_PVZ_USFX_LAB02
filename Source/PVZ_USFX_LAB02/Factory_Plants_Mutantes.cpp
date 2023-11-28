// Fill out your copyright notice in the Description page of Project Settings.


#include "Factory_Plants_Mutantes.h"

#include "Plant_AT_GrowLanzaFuego.h"
#include "Plant_AT_Hielo.h"

APlant* AFactory_Plants_Mutantes::CrearPlants(FString PlantSKU, FVector UbicacionPlantCreacion)
{
	//Selecciona que pocion crear dependiendo de la cadena pasada
	if (PlantSKU.Equals("Planta Ataque Fuego")) {
		return GetWorld()->SpawnActor<APlant_AT_GrowLanzaFuego>(APlant_AT_GrowLanzaFuego::StaticClass(),
			UbicacionPlantCreacion, FRotator::ZeroRotator);

	}
	else if (PlantSKU.Equals("Planta Ataque Hielo")) {
		return GetWorld()->SpawnActor<APlant_AT_Hielo>(APlant_AT_Hielo::StaticClass(),
			UbicacionPlantCreacion, FRotator::ZeroRotator);

	}
	else return nullptr;
	//Retorna null si la cadena no es valida
}

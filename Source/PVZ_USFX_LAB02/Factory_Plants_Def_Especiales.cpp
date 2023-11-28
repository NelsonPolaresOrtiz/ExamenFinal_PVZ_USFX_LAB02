// Fill out your copyright notice in the Description page of Project Settings.


#include "Factory_Plants_Def_Especiales.h"

#include "Planta_Especial_Hongo.h"
#include "Planta_Papa__Especial.h"

APlant* AFactory_Plants_Def_Especiales::CrearPlants(FString PlantSKU, FVector UbicacionPlantCreacion)
{
	//Selecciona que pocion crear dependiendo de la cadena pasada
	if (PlantSKU.Equals("Planta Hongo")) {
		return GetWorld()->SpawnActor<APlanta_Especial_Hongo>(APlanta_Especial_Hongo::StaticClass(),
			UbicacionPlantCreacion, FRotator::ZeroRotator);

	}
	else if (PlantSKU.Equals("Planta Especial")) {
		return GetWorld()->SpawnActor<APlanta_Papa__Especial>(APlanta_Papa__Especial::StaticClass(),
			UbicacionPlantCreacion, FRotator::ZeroRotator);

	}
	else return nullptr;
	//Retorna null si la cadena no es valida
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factory_Plants.h"
#include "Factory_Plants_Def_Especiales.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AFactory_Plants_Def_Especiales : public AFactory_Plants
{
	GENERATED_BODY()
public:
	
	virtual	APlant* CrearPlants(FString PlantSKU, FVector UbicacionPlantCreacion) override;

};

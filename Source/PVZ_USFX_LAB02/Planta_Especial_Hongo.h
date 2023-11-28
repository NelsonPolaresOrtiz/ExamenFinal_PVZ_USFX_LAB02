// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Planta_defensa.h"
#include "Planta_Especial_Hongo.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APlanta_Especial_Hongo : public APlanta_defensa
{
	GENERATED_BODY()

public:
	APlanta_Especial_Hongo();

	void CambiarDireccionZombie(AZombie* Zombie);

};

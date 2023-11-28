// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Planta_defensa.h"
#include "Planta_Papa__Especial.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APlanta_Papa__Especial : public APlanta_defensa
{
	GENERATED_BODY()

public:

	APlanta_Papa__Especial();

	void MuerteInstantenea(AZombie* Zombie);
};

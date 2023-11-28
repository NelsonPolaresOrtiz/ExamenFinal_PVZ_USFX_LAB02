// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Planta_Ataque.h"
#include "Plant_AT_Hielo.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APlant_AT_Hielo : public APlanta_Ataque
{
	GENERATED_BODY()
public:
	APlant_AT_Hielo();

	void ReducirVelocidadZombie(AZombie* Zombie);

};

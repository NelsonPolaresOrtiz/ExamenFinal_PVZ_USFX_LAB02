// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Plant.h"
#include "Planta_Ataque.h"
#include "Congela_Plant.generated.h"
/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ACongela_Plant : public APlanta_Ataque
{
	GENERATED_BODY()
public:

	ACongela_Plant();
	void CongelarZombies(AZombie* Zombie);
	//void CogelarPlanta(AZombie* zombie);
};

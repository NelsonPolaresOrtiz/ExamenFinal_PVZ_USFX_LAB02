// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ZombieDecorator.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UZombieDecorator : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB02_API IZombieDecorator
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void Tick(float DeltaTime) = 0;
	virtual void AplicarEfectoQuemar() = 0;
	virtual void AplicarAtaqueFeroz() = 0;
	virtual void AplicarAtaqueArmadura() = 0;
};

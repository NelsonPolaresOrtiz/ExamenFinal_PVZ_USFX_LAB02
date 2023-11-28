// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Planta_Ataque.h"
#include "Crece_planta.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ACrece_planta : public APlanta_Ataque
{
	GENERATED_BODY()
public:
	ACrece_planta();

	void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	void IniciarCrecimiento();

	void DetenerCrecimiento();

public:
	float TiempoCrecimiento;
	bool bEstaCreciendo;
	float FactorAumentoDano;
};

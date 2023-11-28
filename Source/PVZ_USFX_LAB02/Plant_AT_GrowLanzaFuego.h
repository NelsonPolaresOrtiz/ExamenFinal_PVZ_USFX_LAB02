// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Planta_Ataque.h"
#include "Proyectil.h"
#include "Plant_AT_GrowLanzaFuego.generated.h"
/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APlant_AT_GrowLanzaFuego : public APlanta_Ataque
{
	GENERATED_BODY()
public:
	APlant_AT_GrowLanzaFuego();

	void QuemarZombie(AZombie* Zombie);
	virtual void FireShot(FVector FireDirection) override;
	virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

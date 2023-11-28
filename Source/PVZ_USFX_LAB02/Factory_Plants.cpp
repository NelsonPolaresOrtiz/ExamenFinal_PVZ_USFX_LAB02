// Fill out your copyright notice in the Description page of Project Settings.


#include "Factory_Plants.h"

// Sets default values
AFactory_Plants::AFactory_Plants()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFactory_Plants::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFactory_Plants::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

APlant* AFactory_Plants::OrdenarPlants(FString Categoria, FVector UbicacionPlantOrden)
{
	//Crea la planta y registra su nombre
	APlant* Plants = CrearPlants(Categoria, UbicacionPlantOrden);

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Creando %s"), *Plants->GetNombrePlanta()));

	//Regresa la pocion creada	
	return Plants;

}


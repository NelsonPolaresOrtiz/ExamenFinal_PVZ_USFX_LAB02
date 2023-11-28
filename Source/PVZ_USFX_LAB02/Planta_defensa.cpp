// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_defensa.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

APlanta_defensa::APlanta_defensa()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantAtaqueMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));

	MeshPlanta->SetStaticMesh(PlantAtaqueMesh.Object);

	MeshPlanta->SetRelativeScale3D(FVector(0.5f, 0.5f, 1.5f));
	energia = 500;


}

void APlanta_defensa::BeginPlay()
{
}

void APlanta_defensa::Tick(float DeltaTime)
{
}

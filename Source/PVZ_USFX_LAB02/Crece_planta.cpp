// Fill out your copyright notice in the Description page of Project Settings.


#include "Crece_planta.h"
#include "TimerManager.h"

ACrece_planta::ACrece_planta()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

	MeshPlanta->SetStaticMesh(PlantaMesh.Object);

	MeshPlanta->SetRelativeScale3D(FVector(1.f, 1.0f, 1.0f));

	NombrePlanta = "Planta Crecer";

	// Configura el tiempo de crecimiento y el factor de aumento de daño
	TiempoCrecimiento = 3.0f;
	bEstaCreciendo = false;
	FactorAumentoDano = 3.0f;
	
}
void ACrece_planta::BeginPlay()
{
	Super::BeginPlay();

	// Inicia el temporizador para el crecimiento de la planta
	GetWorldTimerManager().SetTimer(ManejoTiempo, this, &ACrece_planta::IniciarCrecimiento, 1.0f, false);
}
void ACrece_planta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ACrece_planta::IniciarCrecimiento()
{
	bEstaCreciendo = true;

	// Después de TiempoCrecimiento segundos, detiene el crecimiento
	GetWorldTimerManager().SetTimer(ManejoTiempo, this, &ACrece_planta::DetenerCrecimiento, TiempoCrecimiento, false);
}
void ACrece_planta::DetenerCrecimiento()
{
	bEstaCreciendo = false;
}
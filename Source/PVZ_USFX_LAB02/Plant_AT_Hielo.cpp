// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant_AT_Hielo.h"

APlant_AT_Hielo::APlant_AT_Hielo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	NombrePlanta = "Planta Ataque Hielo";
	CantidadDisparos = 6;
}

void APlant_AT_Hielo::ReducirVelocidadZombie(AZombie* Zombie)
{
	if (Zombie)
	{
		// Reducir la velocidad del zombie
		Zombie->Velocidad *= 0.5f; // Puedes ajustar el factor según sea necesario
	}
}

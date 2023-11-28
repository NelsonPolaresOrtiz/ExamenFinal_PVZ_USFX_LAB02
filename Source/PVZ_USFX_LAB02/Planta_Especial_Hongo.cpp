// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_Especial_Hongo.h"
#include "Zombie.h"
APlanta_Especial_Hongo::APlanta_Especial_Hongo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	MeshPlanta->SetRelativeScale3D(FVector(2.0f, 1.0f, 2.0f));

	NombrePlanta = "Planta Hongo";

}

void APlanta_Especial_Hongo::CambiarDireccionZombie(AZombie* Zombie)
{
	if (Zombie)
	{
		// Cambiar la dirección del zombie ajustando la velocidad
		FVector NuevaDireccion = FVector(800.0f, 400.0f, 160.0f);
		//Zombie->SetCambiarDireccion(NuevaDireccion); // Ajusta esta función según cómo hayas implementado el movimiento del zombie
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Zombie Cambio de Dirrecion "));
	}
}

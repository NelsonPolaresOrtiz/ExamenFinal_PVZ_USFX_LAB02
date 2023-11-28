// Fill out your copyright notice in the Description page of Project Settings.


#include "Congela_Plant.h"

ACongela_Plant::ACongela_Plant()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	NombrePlanta = "Planta Congela";
	CantidadDisparos = 1;
}

// Congela al zombie durante 2 segundos y luego restaura la velocidad
void ACongela_Plant::CongelarZombies(AZombie* Zombie)
{
    // Detener el zombie durante 2 segundos
    Zombie->Velocidad = 0.0f;
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Zombie Congelado. Velocidad del zombi reducida a 0"));

    // Restaurar la velocidad después de 5 segundos
    FTimerHandle TimerHandle;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, [Zombie]()
        {
            Zombie->Velocidad = 1.50f; // Ajusta la velocidad según tus necesidades
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Zombie Descongelado. Velocidad restaurada"));
        }, 5.0f, false);
}

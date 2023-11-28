// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_Papa__Especial.h"

APlanta_Papa__Especial::APlanta_Papa__Especial()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	NombrePlanta = "Papa Especial";

}

void APlanta_Papa__Especial::MuerteInstantenea(AZombie* Zombie)
{
    if (Zombie)
    {
        Zombie->energia -= 500;
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Papa Especial Mato a  Zombie"));
    }
}

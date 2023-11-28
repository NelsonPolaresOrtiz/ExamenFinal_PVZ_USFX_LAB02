// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant_AT_GrowLanzaFuego.h"
#include "Zombie.h"
#include "Proyectil_Fuego.h"
APlant_AT_GrowLanzaFuego::APlant_AT_GrowLanzaFuego()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	MeshPlanta->SetRelativeScale3D(FVector(1.3f, 1.3f, 1.3f));
	NombrePlanta = "Planta Ataque Fuego";
	CantidadDisparos = 10;

}

void APlant_AT_GrowLanzaFuego::QuemarZombie(AZombie* Zombie)
{
	 if (Zombie)
    {
        // Crear un proyectil de fuego
        AProyectil_Fuego* ProyectilFuego = GetWorld()->SpawnActor<AProyectil_Fuego>(AProyectil_Fuego::StaticClass(), GetActorLocation(), GetActorRotation());

        // Ajustar propiedades del proyectil (tamaño, daño, etc.)
        if (ProyectilFuego)
        {
            // Puedes ajustar estos valores según tus necesidades
            ProyectilFuego->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f)); // Proyectil más grande
          //  ProyectilFuego->SetDanio(50); // Mayor daño
        }

        // Aplicar efecto de quemar al Zombie (puedes implementar esto en la clase Zombie)
       Zombie->AplicarEfectoQuemar();

        // Realizar otras acciones necesarias
    }

}

void APlant_AT_GrowLanzaFuego::FireShot(FVector FireDirection)
{

	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<AProyectil_Fuego>(SpawnLocation, FireRotation);
			}

			//bCanFire = false;
			//World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlanta_Ataque::ShotTimerExpired, FireRate);

		}
	}
}

void APlant_AT_GrowLanzaFuego::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	AZombie* Zombie = Cast<AZombie>(OtherActor);

	if (OtherActor->ActorHasTag("Zombie")) {
		Zombie->energia -= 50;
		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje %i"), Zombie->energia));
		if (Zombie->energia <= 0) {
			Zombie->Destroy();
		};
	}
	Destroy();
}

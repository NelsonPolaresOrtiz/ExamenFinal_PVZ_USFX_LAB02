// Copyright Epic Games, Inc. All Rights Reserved.


#include "PVZ_USFX_LAB02GameModeBase.h"
#include "Spawns.h"
#include "Zombie.h"
#include "Plant.h"
//#include "Sol.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

#include "Jugador.h"
#include "Controlador.h"
#include "HUDPlantas.h"


#include "Planta_Ataque.h"
#include "Lanza_Guisantes.h"

#include "ZombieComun.h"
#include "ZombieCono.h"
#include "ZombieCubo.h"

//Implementacion Factory Methody
#include "Factory_Plants.h"
#include "Factory_Plants_Mutantes.h"
#include "Crece_planta.h"
#include "Congela_Plant.h"
#include "Proyectil.h"
//OTRO Factory de platas
#include "Planta_defensa.h"
#include "Factory_Plants_Def_Especiales.h"
#include "Planta_Especial_Hongo.h"
#include "Planta_Papa__Especial.h"
#include "Plant_AT_Hielo.h"
#include "Plant_AT_GrowLanzaFuego.h"


APVZ_USFX_LAB02GameModeBase::APVZ_USFX_LAB02GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	//Definiendo el Pawn o Peon
	DefaultPawnClass = AJugador::StaticClass();
	//Definiendo el Controlador
	PlayerControllerClass = AControlador::StaticClass();
	//Definiendo el HUD
	//HUDClass = AHUDPlantas::StaticClass();

	//// En algún lugar de tu código (preferiblemente en la inicialización)
	//UWorld* World = GetWorld();
	//check(World);

	//// Configura las colisiones entre canales
	//World->IgnoreActorWhenMoving(this, APotion::StaticClass()); // Ignora colisiones con otras pociones
	//World->IgnoreActorWhenMoving(APotion::StaticClass(), AZombie::StaticClass()); // Permite colisiones con zombies


	contador = FVector(0, 0, 0);
	localizacion = FVector(400.0, 200.0, 100.0);
	contador2 = 0;

	TiempoTranscurrido = 0.0f;


	FilaActual = 1;
	ColumnaActual = 1;

}

 
void APVZ_USFX_LAB02GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	//Crea las Fabrica de Plantas Mutantes
	AFactory_Plants* CreadorPlantaMuntante = GetWorld()->SpawnActor<AFactory_Plants_Mutantes>(AFactory_Plants_Mutantes::StaticClass());
	//Definiendo las posiciónes de las Plantas Mutantes
	FVector UbicacionPlantaCreacion = FVector(-920.0f, -200.0f, 22.0f);

	//definimos Numero Aleatorio 
	int numeroAleatorioplants;

	for (int i = 0; i < 7; i++) {

		// Define una posición temporal para la planta en X
		UbicacionPlantaCreacion.X += 100;

		numeroAleatorioplants = rand() % 2 + 1;

		if (numeroAleatorioplants == 1) {
			//Crea una poción de Planta que Congela
			APlant* Plants = CreadorPlantaMuntante->OrdenarPlants("Planta Ataque Fuego", UbicacionPlantaCreacion);
			Plants->SetActorEnableCollision(false);
			ArrayPlantasMutantes.Add(Plants);
		}

		if (numeroAleatorioplants == 2) {
			//Crea una Planta que crece
			APlant* Plants = CreadorPlantaMuntante->OrdenarPlants("Planta Ataque Hielo", UbicacionPlantaCreacion);
			Plants->SetActorEnableCollision(false);
			Plants->SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));
			ArrayPlantasMutantes.Add(Plants);

		}
	}

	// Crea Fabrica de Plantas desfensa Especiales
	AFactory_Plants* CreadorPlantaEspeciales = GetWorld()->SpawnActor<AFactory_Plants_Def_Especiales>(AFactory_Plants_Def_Especiales::StaticClass());
	//Definiendo las posiciónes iniciales  de las plantas
	FVector UbicacionPlantaCreacionE = FVector(-920.0f, 100.0f, 22.0f);

	//definimos Numero Aleatorio 
	int numeroAleatorioplantsEspeciales;

	for (int i = 0; i < 7; i++) {

		// Define una posición temporal para la planta en X
		UbicacionPlantaCreacionE.X += 100;
		numeroAleatorioplantsEspeciales = rand() % 2 + 1;

		if (numeroAleatorioplantsEspeciales == 1) {
			//Crea una planta Especial papa
			//APlant* Plants = CreadorPlantaEspeciales->OrdenarPlants("Planta Hongo", UbicacionPlantaCreacion);
			APlant* Plants = CreadorPlantaEspeciales->OrdenarPlants("Planta Especial", UbicacionPlantaCreacionE);
			Plants->SetActorEnableCollision(false);
			ArrayPlantasEspeciales.Add(Plants);
		}
		if (numeroAleatorioplantsEspeciales == 2) {
			//Crea una planta especial hongo
			APlant* Plants = CreadorPlantaEspeciales->OrdenarPlants("Planta Hongo", UbicacionPlantaCreacionE);
			Plants->SetActorEnableCollision(false);
			ArrayPlantasEspeciales.Add(Plants);

		}
	}


	// Definición de un objeto de tipo World
	UWorld* const World = GetWorld();

	//ASpawns* Spawn1 = GetWorld()->SpawnActor<ASpawns>(ASpawns::StaticClass(), FVector(0,0,0), FRotator::ZeroRotator);
	// 
	//AZombie* Zombie1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), FVector(400.0, 200.0, 100.0), FRotator::ZeroRotator);



	//World->GetTimerManager().SetTimer(Temporizador, this, &APVZ_USFX_LAB02GameModeBase::Spawn, 2, true);

	//Aparición de los soles
	//ASol* Sol1 = GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), FVector(-400,-50,160), FRotator::ZeroRotator);
	//ASol* Sol2 = GetWorld()->SpawnActor<ASol>(ASol::StaticClass(), FVector(-450, -50, 160), FRotator::ZeroRotator);

	//Definiendo la posición de los zombies
	FVector SpawnLocationZombie = FVector(-920.0f, 700.0f, 22.0f);

	// Genera 7 zombies
	for (int i = 0; i < 7; i++) {

		// Define una posición temporal para el zombie en X
		SpawnLocationZombie.X += 100;

		// Aparicion de los zombies
		NuevoZombie = GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(),SpawnLocationZombie, FRotator::ZeroRotator);
		NuevoZombie->SetActorEnableCollision(true);
		NuevoZombie->Velocidad = FMath::FRandRange(0.1, 0.2);

		//NuevoZombie->Velocidad = 0.2;

		ArrayZombies.Add(NuevoZombie);
	
	}





	//Definiendo la posición de las plantas
	FVector SpawnLocationPlant = FVector(-920.0f, -600.0f, 22.0f);
	FVector SpawnLocationPlantTemp = SpawnLocationPlant;

	// Genera 5 plantas
	for (int i = 0; i < 7; i++)
	{
		//Define una posicion temporal para la planta en X
		SpawnLocationPlantTemp.X += 100;



		for (int j = 0; j < 2; j++)
		{

			// Define una posición temporal para la planta en Y
			SpawnLocationPlantTemp.Y += 100;

			// Genera un nombre para la planta
			//NombrePlanta = FString::Printf(TEXT("Planta %d_%d"), i + 1, j + 1); // Cambio en la generación del nombre

			// Crea una nueva instancia de APlant en el mundo
			NuevaPlantaGuisante = GetWorld()->SpawnActor<ALanza_Guisantes>(ALanza_Guisantes::StaticClass(),
									SpawnLocationPlantTemp, FRotator::ZeroRotator);

			// Asigna un valor aleatorio a la energía de la planta
			NuevaPlantaGuisante->energia = FMath::FRandRange(0.0, 10.0);

			// Muestra un mensaje en la consola
			//UE_LOG(LogTemp, Warning, TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlanta->energia);

			// Muestra un mensaje en la pantalla
			//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlantaGuisante->energia));
			// Muestra un mensaje en el registro de errores
			//UE_LOG(LogTemp, Warning, TEXT("Energía de %s: %i"), *NombrePlanta, NuevaPlantaGuisante->energia);

			// Agrega la planta al contenedor de plantas
			Plantas.Add(NombrePlanta, NuevaPlantaGuisante);


			Plantas2.Add(NuevaPlantaGuisante);


			// Coloca la planta en una posición diferente
			//NuevaPlanta->SetActorLocation(FVector(i * 100, 0, 0));


		}
		// Define una posición temporal para la planta en Y
		SpawnLocationPlantTemp.Y = SpawnLocationPlant.Y;

	}

	//String Mensaje = FString::Printf(TEXT("Encontrada planta: %s"), *NombrePlanta);
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, Mensaje);


	//World->GetTimerManager().SetTimer(Temporizador, this, &APVZ_USFX_LAB02GameModeBase::aumentovelocidad, 1, true);

	//orld->GetTimerManager().SetTimer(Temporizador2, this, &APVZ_USFX_LAB02GameModeBase::MostrarEnergiaDePlantas, 1.f, true);


}

void APVZ_USFX_LAB02GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido += DeltaTime;

	for (APlant* Planta : ArrayPlantas) {
		FVector localizacionesPlantas = Planta->GetActorLocation();


	}

	for (AZombie* Zombie : ArrayZombies) {
		FVector LocalizacionZombies = Zombie->GetActorLocation();

		for (APlant* Plants : ArrayPlantasEspeciales) {

			FVector LocalizacionPlantas = Plants->GetActorLocation();

			if (FVector::DistSquared(LocalizacionPlantas, LocalizacionZombies) < (MaxDistance * MaxDistance)) {
				if (!(Plants->IsActorDestroyed())) {
					Plants->Destroy();
					if (Plants->IsActorDestroyed()) {
						/*GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Se detecta colision pocion con zombie")));*/
						Plants->GetNombrePlanta();
						if (Plants->GetNombrePlanta() == "Planta Ataque Fuego")
						{
							APlant_AT_Hielo* PlantaCongela = Cast<APlant_AT_Hielo>(Plants);
							PlantaCongela->ReducirVelocidadZombie(Zombie);
						}

						if (Plants->GetNombrePlanta() == "Planta Ataque Hielo")
						{
							APlant_AT_GrowLanzaFuego* PlantaFuego = Cast<APlant_AT_GrowLanzaFuego>(Plants);
							PlantaFuego->QuemarZombie(Zombie);
			
						}

						if (Plants->GetNombrePlanta() == "Planta Hongo")
						{
							APlanta_Especial_Hongo* PlantaHongo = Cast<APlanta_Especial_Hongo>(Plants);
							PlantaHongo->CambiarDireccionZombie(Zombie);
						}

						if (Plants->GetNombrePlanta() == "Papa Especial")
						{
							APlanta_Papa__Especial* PlantaMortal = Cast<APlanta_Papa__Especial>(Plants);
							PlantaMortal->MuerteInstantenea(Zombie);
						}
					}
				}

			}
		}

	}



	//if (TiempoTranscurrido > 2.0f) {
	//	// Iterar sobre el vector de objetos
	//	for (int i = 0; i < Zombies.Num(); i++) {
	//		Zombies[i]->Velocidad = FMath::FRand() * 2.0f;

	//		//Zombies[i]->MovementSpeed += i * 1.0f;
	//	}
	//	TiempoTranscurrido = 0.0f;
	// 
	//}

	//if (TiempoTranscurrido > 5.0f) {
	//	// Iterar sobre el vector de objetos
	//	for (int i = 0; i < Plantas2.Num(); i++) {
	//		int vtemp= Plantas2[i]->energia;
	//		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Energía de %s: %i"), *NombrePlanta, vtemp));

	//		
	//	}
	//	TiempoTranscurrido = 0.0f;
	//}



}

void APVZ_USFX_LAB02GameModeBase::Spawn()
{
	contador2++;

	contador = contador + FVector(100, 0, 0);
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));


	AZombie* Zombie1 = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), localizacion, FRotator::ZeroRotator);



	localizacion.X = localizacion.X + contador2 * 100;
	localizacion.Y = localizacion.Y + contador2 * 100;
	//localizacion = localizacion + contador;




}

void APVZ_USFX_LAB02GameModeBase::aumentovelocidad()
{

	for (int i = 0; i < ArrayZombies.Num(); i++)
	{
		ArrayZombies[i]->Velocidad = +FMath::FRandRange(0, 0.2);
	}

}

void APVZ_USFX_LAB02GameModeBase::MostrarEnergiaDePlantas()
{

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Este es un mensaje")));

	NombrePlanta = FString::Printf(TEXT("Planta %d_%d"), FilaActual, ColumnaActual);

	APlant* Planta = Plantas.FindRef(NombrePlanta);

	if (Planta)
	{
		FString Mensaje = FString::Printf(TEXT("%s: Energia %i"), *NombrePlanta, Planta->energia);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, Mensaje);

		UE_LOG(LogTemp, Warning, TEXT("%s"), *Mensaje);

	}
	else
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("No se encontró la planta")));
	}

	ColumnaActual++;

	if (ColumnaActual > 2) // Ajusta este valor al número total de columnas
	{
		ColumnaActual = 1;
		FilaActual++;

		if (FilaActual > 5) // Ajusta este valor al número total de filas
		{
			FilaActual = 1;
		}
	}

}



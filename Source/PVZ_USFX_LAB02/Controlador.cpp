// Fill out your copyright notice in the Description page of Project Settings.


#include "Controlador.h"
#include "Proyectil.h"



AControlador::AControlador()
{
	bShowMouseCursor = true;

	bEnableClickEvents = true;

	DefaultMouseCursor = EMouseCursor::Crosshairs;

	bEnableMouseOverEvents = true;
}

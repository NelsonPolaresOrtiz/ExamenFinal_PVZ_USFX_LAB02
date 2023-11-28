// Fill out your copyright notice in the Description page of Project Settings.


#include "Grilla_Pasto.h"

void AGrilla_Pasto::BeginPlay()
{
	Super::BeginPlay();



}

AGrilla_Pasto::AGrilla_Pasto()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ModeloGrilla0(TEXT("Material'/Game/StarterContent/Shapes/f2afcc0e4bace943adf731af58a88f2c__1__Mat.f2afcc0e4bace943adf731af58a88f2c__1__Mat'"));
	MeshGrilla->SetStaticMesh(ModeloGrilla0.Object);

	MeshGrilla->SetMaterial(0, MaterialGrilla1);
}




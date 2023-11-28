// Fill out your copyright notice in the Description page of Project Settings.


#include "GrillaAgua.h"

void AGrillaAgua::BeginPlay()
{
	Super::BeginPlay();
}

AGrillaAgua::AGrillaAgua()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ModeloGrilla0(TEXT("Texture2D'/Game/StarterContent/Shapes/f2afcc0e4bace943adf731af58a88f2c__3_.f2afcc0e4bace943adf731af58a88f2c__3_'"));
	MeshGrilla->SetStaticMesh(ModeloGrilla0.Object);


	MeshGrilla->SetMaterial(0, MaterialGrilla2);

}

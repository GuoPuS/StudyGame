// Fill out your copyright notice in the Description page of Project Settings.


#include "../../Public/GameCore/TowerDefenceCamera.h"

// Sets default values
ATowerDefenceCamera::ATowerDefenceCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATowerDefenceCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATowerDefenceCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATowerDefenceCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


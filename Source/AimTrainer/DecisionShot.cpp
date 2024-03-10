// Fill out your copyright notice in the Description page of Project Settings.


#include "DecisionShot.h"

// Sets default values
ADecisionShot::ADecisionShot()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ADecisionShot::BeginPlay()
{
	Super::BeginPlay();
	FVector location = FVector(0.0f, 0.0f, 0.0f);
	GetWorld()->SpawnActor(Sphere, &location);
}

// Called every frame
void ADecisionShot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


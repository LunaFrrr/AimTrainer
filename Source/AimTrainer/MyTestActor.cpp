// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTestActor.h"

// Sets default values
AMyTestActor::AMyTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ValueA = 100;
	ValueB = 20;
}

int32 AMyTestActor::CalculateValue() {
	OnValueCalculate();
	return ValueA + ValueB;
}

void AMyTestActor::OnValueCalculate_Implementation() {
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, TEXT("Hello"));
}

// Called when the game starts or when spawned
void AMyTestActor::BeginPlay()
{
	Super::BeginPlay();
	CalculateValue();
}

// Called every frame
void AMyTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


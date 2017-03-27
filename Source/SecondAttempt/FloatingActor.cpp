// Fill out your copyright notice in the Description page of Project Settings.

#include "SecondAttempt.h"
#include "FloatingActor.h"


// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	float DeltaX = (FMath::Sin(RunningTime + DeltaTime * DeltaChange) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * magnatude;       //Scale our height by a factor of magnatude
	NewLocation.X += DeltaX * magnatude;
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}


// Fill out your copyright notice in the Description page of Project Settings.

#include "SecondAttempt.h"
#include "movingPlatform.h"


// Sets default values
AmovingPlatform::AmovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AmovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &AmovingPlatform::AdvanceTimer, 5.0f, true);
}

// Called every frame
void AmovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (forward) {
		FVector NewLocation = GetActorLocation();
		NewLocation.Z -= 1;
		SetActorLocation(NewLocation);
	}
	else {
		FVector NewLocation = GetActorLocation();
		NewLocation.Z += 1;
		SetActorLocation(NewLocation);
	}
}

void AmovingPlatform::AdvanceTimer()
{
	if (forward) {
		forward = false;
	}
	else {
		forward = true;
	}
}


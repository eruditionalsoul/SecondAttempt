// Fill out your copyright notice in the Description page of Project Settings.

#include "SecondAttempt.h"
#include "torch.h"


// Sets default values
Atorch::Atorch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Atorch::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &Atorch::DouseWithWater, 4.0f, false);
}

// Called every frame
void Atorch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Log, TEXT("%f"), GetWorldTimerManager().GetTimerElapsed(CountdownTimerHandle));
}

void Atorch::AddFuel_Implementation()
{
	float time(GetWorldTimerManager().GetTimerRemaining(CountdownTimerHandle));
	if (time > 0) {
		GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &Atorch::DouseWithWater, time + 4.0f, false);
	}
	UE_LOG(LogTemp, Log, TEXT("%f"), GetWorldTimerManager().GetTimerRemaining(CountdownTimerHandle));
}

void Atorch::DouseWithWater_Implementation()
{
	GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
}


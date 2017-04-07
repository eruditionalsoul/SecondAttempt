// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "movingPlatform.generated.h"

UCLASS()
class SECONDATTEMPT_API AmovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AmovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//How long, in seconds, the countdown will run
	UPROPERTY(EditAnywhere)
	int32 moveTime;

	void AdvanceTimer();

	FTimerHandle CountdownTimerHandle;

	bool forward;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "torch.generated.h"

UCLASS()
class SECONDATTEMPT_API Atorch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Atorch();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//How long, in seconds, the torch burn
	UPROPERTY(EditAnywhere)
	int32 initTorchBurn;

	UFUNCTION(BlueprintNativeEvent)
	void AddFuel();
	virtual void AddFuel_Implementation();

	UFUNCTION(BlueprintNativeEvent)
	void DouseWithWater();
	virtual void DouseWithWater_Implementation();
	
	FTimerHandle CountdownTimerHandle;
};

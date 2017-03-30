// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CameraDirector.generated.h"

USTRUCT()
struct Fcam_n_time
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	AActor *cam;

	UPROPERTY(EditAnywhere)
	float time;
};

UCLASS()
class SECONDATTEMPT_API ACameraDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACameraDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UPROPERTY(EditAnywhere)
	//AActor* CameraOne;

	//UPROPERTY(EditAnywhere)
	//AActor* CameraTwo;

	int currCamera;

	UPROPERTY(EditAnywhere)
	TArray<Fcam_n_time> cameras;

	float TimeToNextCameraChange;
	
};

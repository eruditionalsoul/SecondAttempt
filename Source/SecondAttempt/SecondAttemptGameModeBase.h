// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "SecondAttemptGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SECONDATTEMPT_API ASecondAttemptGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;
	
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShooterGameMode.h"
#include "AllKillGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AAllKillGameMode : public AShooterGameMode
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled);

	
};

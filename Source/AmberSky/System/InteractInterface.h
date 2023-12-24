// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class AMBERSKY_API UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class AMBERSKY_API IInteractInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Interact(APlayerController* PlayerController);
};
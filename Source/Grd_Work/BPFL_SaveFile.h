// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFL_SaveFile.generated.h"

/**
 * 
 */
UCLASS()
class GRD_WORK_API UBPFL_SaveFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static bool SaveTextToFile(const FString& Text, const FString& FileName);
	
};

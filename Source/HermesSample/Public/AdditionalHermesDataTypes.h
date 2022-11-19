// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HermesMessage.h"
#include "AdditionalHermesDataTypes.generated.h"

USTRUCT(BlueprintType)
struct FHermesData_Color : public FHermesMessageData
{
	GENERATED_BODY()

	virtual UScriptStruct* GetScriptStruct() const override { return FHermesData_Color::StaticStruct(); }

	UPROPERTY(BlueprintReadWrite)
	FLinearColor Color;
};

/**
 * 
 */
UCLASS()
class HERMESSAMPLE_API UAdditionalHermesDataTypes : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure)
	static FHermesMessageDataHandle MakeHermesColor(const FLinearColor& Color);

	UFUNCTION(BlueprintPure)
	static bool GetHermesColorData(const FHermesMessage& Message, FHermesData_Color& HermesData);
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "HermesSample/Public/AdditionalHermesDataTypes.h"

#include "HermesUtilities.h"

FHermesMessageDataHandle UAdditionalHermesDataTypes::MakeHermesColor(const FLinearColor& Color)
{
	FHermesData_Color* HermesData_Color = new FHermesData_Color();
	HermesData_Color->Color = Color;
	return FHermesMessageDataHandle(HermesData_Color);
}

bool UAdditionalHermesDataTypes::GetHermesColorData(const FHermesMessage& Message, FHermesData_Color& HermesData)
{
	HERMES_DATA_GETTER_IMPL(FHermesData_Color);
}

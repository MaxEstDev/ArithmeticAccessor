// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AA_DoubleAccessorLibrary.generated.h"


UCLASS()
class FLOATINGPOINTACCESSOR_API UAA_DoubleAccessorLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:


	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static double DoubleNaN();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static double DoubleNegativeNaN();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static double DoublePositiveInfinity();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static double DoubleNegativeInfinity();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static double DoubleNegativeZero();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static double DoubleLowestValue();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static double DoubleMinValue();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static double DoubleMaxValue();

	
};

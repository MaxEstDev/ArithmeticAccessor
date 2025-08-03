// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AA_FloatAccessorLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FLOATINGPOINTACCESSOR_API UAA_FloatAccessorLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static float FloatNaN();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static float FloatNegativeNaN();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static float FloatPositiveInfinity();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static float FloatNegativeInfinity();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static float FloatNegativeZero();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static float FloatLowestValue();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static float FloatMinValue();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FloatingPointAccessor", meta =(CompactNodeTitle))
	static float FloatMaxValue();

	UFUNCTION(BlueprintCallable, Category = "FloatingPointAccessor", meta=(CompactNodeTitle="+="))
	static void AddFloat(UPARAM(ref)float& Value, const float Addition);

	UFUNCTION(BlueprintCallable, Category = "FloatingPointAccessor", meta=(CompactNodeTitle="-="))
	static void SubtractFloat(UPARAM(ref)float& Value, const float Subtract);
	
	UFUNCTION(BlueprintCallable, Category = "FloatingPointAccessor", meta=(CompactNodeTitle="*="))
	static void MultiplyFloat(UPARAM(ref)float& Value, const float Multiplier);
	
	UFUNCTION(BlueprintCallable, Category = "FloatingPointAccessor", meta=(CompactNodeTitle="/="))
	static void DivideFloat(UPARAM(ref)float& Value, const float Divider);
};

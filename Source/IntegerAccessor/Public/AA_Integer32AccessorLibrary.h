// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AA_Integer32AccessorLibrary.generated.h"


UCLASS()
class INTEGERACCESSOR_API UAA_Integer32AccessorLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "IntegerAccessor", meta =(CompactNodeTitle))
	static int32 IntegerLowestValue();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "IntegerAccessor", meta =(CompactNodeTitle))
	static int32 IntegerMaxValue();
	
	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="+="))
	static void AddInt(UPARAM(ref)int& Value, const int Addition);

	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="-="))
	static void SubtractInt(UPARAM(ref)int& Value, const int Subtract);
	
	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="*="))
	static void MultiplyInt(UPARAM(ref)int& Value, const int Multiplier);
	
	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="/="))
	static void DivideInt(UPARAM(ref)int& Value, const int Divider);
};



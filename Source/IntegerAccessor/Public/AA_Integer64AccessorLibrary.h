// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AA_Integer64AccessorLibrary.generated.h"

UCLASS()
class INTEGERACCESSOR_API UAA_Integer64AccessorLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "IntegerAccessor", meta =(CompactNodeTitle))
	static int64 Integer64LowestValue();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "IntegerAccessor", meta =(CompactNodeTitle))
	static int64 Integer64MaxValue();

	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="+="))
	static void AddInt64(UPARAM(ref)int64& Value, const int64 Addition);

	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="-="))
	static void SubtractInt64(UPARAM(ref)int64& Value, const int64 Subtract);
	
	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="*="))
	static void MultiplyInt64(UPARAM(ref)int64& Value, const int64 Multiplier);
	
	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="/="))
	static void DivideInt64(UPARAM(ref)int64& Value, const int64 Divider);
};

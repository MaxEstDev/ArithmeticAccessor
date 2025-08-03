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
};

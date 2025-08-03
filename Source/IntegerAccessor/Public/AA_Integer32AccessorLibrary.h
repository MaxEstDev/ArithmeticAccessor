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
};



// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AA_Vector3AccessorLibrary.generated.h"

/**
 * 
 */
UCLASS()
class VECTORACCESSOR_API UAA_Vector3AccessorLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorAccessor", meta =(CompactNodeTitle))
	static int32 VectorToCompact(const FVector Vector);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "VectorAccessor", meta =(CompactNodeTitle))
	static FVector CompactToVector(int32 Compact);
};

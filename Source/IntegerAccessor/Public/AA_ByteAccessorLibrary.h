// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AA_ByteAccessorLibrary.generated.h"


UCLASS()
class INTEGERACCESSOR_API UAA_ByteAccessorLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "IntegerAccessor", meta =(CompactNodeTitle))
	static uint8 ByteLowestValue();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "IntegerAccessor", meta =(CompactNodeTitle))
	static uint8 ByteMaxValue();
	
	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="+="))
	static void AddByte(UPARAM(ref)uint8& Value, const uint8 Addition);

	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="-="))
	static void SubtractByte(UPARAM(ref)uint8& Value, const uint8 Subtract);
	
	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="*="))
	static void MultiplyByte(UPARAM(ref)uint8& Value, const uint8 Multiplier);
	
	UFUNCTION(BlueprintCallable, Category = "IntegerAccessor", meta=(CompactNodeTitle="/="))
	static void DivideByte(UPARAM(ref)uint8& Value, const uint8 Divider);
};

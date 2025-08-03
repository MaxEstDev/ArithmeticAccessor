// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026


#include "AA_ByteAccessorLibrary.h"
#include <cmath>
#include <limits>

uint8 UAA_ByteAccessorLibrary::ByteLowestValue()
{
	return std::numeric_limits<uint8>::lowest();
}

uint8 UAA_ByteAccessorLibrary::ByteMaxValue()
{
	return std::numeric_limits<uint8>::max();
}

void UAA_ByteAccessorLibrary::AddByte(uint8& Value, const uint8 Addition)
{
	Value += Addition;
}

void UAA_ByteAccessorLibrary::SubtractByte(uint8& Value, const uint8 Subtract)
{
	Value -= Subtract;
}

void UAA_ByteAccessorLibrary::MultiplyByte(uint8& Value, const uint8 Multiplier)
{
	Value *= Multiplier;
}

void UAA_ByteAccessorLibrary::DivideByte(uint8& Value, const uint8 Divider)
{
	Value /= Divider;
}

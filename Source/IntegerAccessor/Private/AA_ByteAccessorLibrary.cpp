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

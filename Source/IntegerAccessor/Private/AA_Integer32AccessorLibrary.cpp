// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026

#include "AA_Integer32AccessorLibrary.h"
#include <cmath>
#include <limits>

int32 UAA_Integer32AccessorLibrary::IntegerLowestValue()
{
	return std::numeric_limits<int>::lowest();
}

int32 UAA_Integer32AccessorLibrary::IntegerMaxValue()
{
	return std::numeric_limits<int32>::max();
}

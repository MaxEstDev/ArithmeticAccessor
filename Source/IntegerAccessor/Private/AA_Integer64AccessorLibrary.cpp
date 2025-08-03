// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026


#include "AA_Integer64AccessorLibrary.h"
#include <cmath>
#include <limits>

int64 UAA_Integer64AccessorLibrary::Integer64LowestValue()
{
	return std::numeric_limits<int64>::lowest();
}

int64 UAA_Integer64AccessorLibrary::Integer64MaxValue()
{
	return std::numeric_limits<int64>::max();
}

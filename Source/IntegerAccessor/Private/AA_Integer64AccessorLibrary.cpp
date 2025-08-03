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

void UAA_Integer64AccessorLibrary::AddInt64(int64& Value, const int64 Addition)
{
	Value += Addition;
}

void UAA_Integer64AccessorLibrary::SubtractInt64(int64& Value, const int64 Subtract)
{
	Value -= Subtract;
}

void UAA_Integer64AccessorLibrary::MultiplyInt64(int64& Value, const int64 Multiplier)
{
	Value *= Multiplier;
}

void UAA_Integer64AccessorLibrary::DivideInt64(int64& Value, const int64 Divider)
{
	Value /= Divider;
}

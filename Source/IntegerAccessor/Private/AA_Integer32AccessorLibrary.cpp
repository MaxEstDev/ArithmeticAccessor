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

void UAA_Integer32AccessorLibrary::AddInt(int& Value, const int Addition)
{
	Value += Addition;
}

void UAA_Integer32AccessorLibrary::SubtractInt(int& Value, const int Subtract)
{
	Value -= Subtract;
}

void UAA_Integer32AccessorLibrary::MultiplyInt(int& Value, const int Multiplier)
{
	Value *= Multiplier;
}

void UAA_Integer32AccessorLibrary::DivideInt(int& Value, const int Divider)
{
	Value /= Divider;
}

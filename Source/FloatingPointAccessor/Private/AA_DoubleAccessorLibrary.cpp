// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026


#include "AA_DoubleAccessorLibrary.h"
#include <cmath>
#include <limits>


double UAA_DoubleAccessorLibrary::DoubleNaN()
{
	return NAN;
}

double UAA_DoubleAccessorLibrary::DoubleNegativeNaN()
{
	return -NAN;
}

double UAA_DoubleAccessorLibrary::DoublePositiveInfinity()
{
	return std::numeric_limits<double>::infinity();
}

double UAA_DoubleAccessorLibrary::DoubleNegativeInfinity()
{
	return -std::numeric_limits<double>::infinity();
}

double UAA_DoubleAccessorLibrary::DoubleNegativeZero()
{
	return -0.f;
}

double UAA_DoubleAccessorLibrary::DoubleLowestValue()
{
	return std::numeric_limits<double>::lowest();
}

double UAA_DoubleAccessorLibrary::DoubleMinValue()
{
	return std::numeric_limits<double>::min();
}

double UAA_DoubleAccessorLibrary::DoubleMaxValue()
{
	return std::numeric_limits<double>::max();
}
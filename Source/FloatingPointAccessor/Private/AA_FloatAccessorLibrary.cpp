// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026


#include "AA_FloatAccessorLibrary.h"
#include <cmath>
#include <limits>


float UAA_FloatAccessorLibrary::FloatNaN()
{
	return NAN;
}

float UAA_FloatAccessorLibrary::FloatNegativeNaN()
{
	return -NAN;
}

float UAA_FloatAccessorLibrary::FloatPositiveInfinity()
{
	return std::numeric_limits<float>::infinity();
}

float UAA_FloatAccessorLibrary::FloatNegativeInfinity()
{
	return -std::numeric_limits<float>::infinity();
}

float UAA_FloatAccessorLibrary::FloatNegativeZero()
{
	return -0.f;
}

float UAA_FloatAccessorLibrary::FloatLowestValue()
{
	return std::numeric_limits<float>::lowest();
}

float UAA_FloatAccessorLibrary::FloatMinValue()
{
	return std::numeric_limits<float>::min();
}

float UAA_FloatAccessorLibrary::FloatMaxValue()
{
	return std::numeric_limits<float>::max();
}

void UAA_FloatAccessorLibrary::AddFloat(float& Value, const float Addition)
{
	Value += Addition;
}

void UAA_FloatAccessorLibrary::SubtractFloat(float& Value, const float Subtract)
{
	Value -= Subtract;
}

void UAA_FloatAccessorLibrary::MultiplyFloat(float& Value, const float Multiplier)
{
	Value *= Multiplier;
}

void UAA_FloatAccessorLibrary::DivideFloat(float& Value, const float Divider)
{
	Value /= Divider;
}



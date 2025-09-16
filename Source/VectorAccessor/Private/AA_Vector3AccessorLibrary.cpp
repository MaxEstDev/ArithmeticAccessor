// MaxEstLa - Arithmetic Accessor - ALL RIGHTS RESERVED 2025-2026


#include "AA_Vector3AccessorLibrary.h"


int32 UAA_Vector3AccessorLibrary::VectorToCompact(const FVector Vector)
{
	const double x = Vector.X;
	const double y = Vector.Y;
    
	int32 Result =(Vector.Z<0?1:0);
    
	Result<<=1;
	Result|=(x<0);
	Result<<=14;
	Result|=(int32)round(fabs(x)*16383);
    
	Result<<=1;
	Result|=(y<0);
	Result<<=15;
	Result|=(int32)round(fabs(y)*32767);
    
	return Result;
}

FVector UAA_Vector3AccessorLibrary::CompactToVector(int32 Compact)
{
	FVector v;
    
	const int32 yy = Compact&0x7fff;
	const int32 sy = ((Compact&0x8000) >0)?-1:1;
	v.Y = sy*yy/32767.0;
	Compact>>=16;
	const int32 xx = Compact&0x3fff;
	const int32 sx= ((Compact&0x4000) >0)?-1:1 ;
	v.X = sx*xx/16383.0;
	Compact>>=15;
    
	const double sqr = v.X*v.X+v.Y*v.Y;
	v.Z = (Compact!=0?-1:1)*sqrt(1-sqr);
	return v;
}

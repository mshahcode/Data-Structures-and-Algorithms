//--------------------------------------------
// Thursday June the 24th 2021
// Arash Habibi
// Point.c
//--------------------------------------------

#include "Point.h"

//--------------------------------------------

Point P_new(float x, float y, float z)
{
	Point new_pt; 
	new_pt.x = x; 
	new_pt.y = y; 
	new_pt.z = z; 
	return new_pt; 
}

//--------------------------------------------

void P_show(Point p, const char *label)
{
	printf("%s : %f %f %f\n", label, p.x, p.y, p.z); 
}
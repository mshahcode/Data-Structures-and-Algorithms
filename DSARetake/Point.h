//--------------------------------------------
// Thursday June the 24th 2021
// Arash Habibi
// Point.h
//--------------------------------------------

#ifndef __POINT_H__
#define __POINT_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct 
{ 
		float x,y,z;
} Point; 

//--------------------------------------
// x, y and z : floats
// Preconditions : none
// Return value : Point

Point P_new(float x, float y, float z);

//--------------------------------------
// p : a point
// label : a character string
// preconditions : none
// return value : void
// This function prints the contents of p
// on the terminal.

void P_show(Point p, const char *label);


#endif
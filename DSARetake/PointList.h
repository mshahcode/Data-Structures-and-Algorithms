//--------------------------------------------
// Thursday June the 24th 2021
// Arash Habibi
// PointList.h
//--------------------------------------------

#ifndef __POINT_LIST_H__
#define __POINT_LIST_H__

#include "Point.h"

typedef struct pl
{ 
		Point pos; 
		struct pl *next; 
} PointList; 

//--------------------------------------
// parameters : None
// return value : an empty point list

PointList* PL_new(void);

//--------------------------------------
// parameters : 
// pl : a point list (empty or not)
// p : a point
// preconditions : none
// return value : a point list obtained
// by adding a new element of value p
// at the beginning of pl. 

PointList* PL_add(PointList *pl, Point p);

//--------------------------------------
// parameters : 
// pl : a point list (empty or not)
// label : a character string
// preconditions : none
// return value : void
// This function prints on the terminal
// the contents of pl and finishes by 
// the total number of elements in the list. 

void PL_print(PointList *pl, const char *label);

//--------------------------------------
// parameters : 
// plist : a point list
// preconditions : the list must not be empty
// return value : the last element of plist
// If the list is empty, the return value is 
// NULL;  

PointList* PL_last(PointList *plist);

//--------------------------------------
// parameters : 
// n : an integer
// preconditions : n must be positive
// return value : a point list containing
// n elements whose components are all 0. 

PointList *PL_nOrigins(int n);

//--------------------------------------
// parameters : 
// pl : a point list
// P : a point
// preconditions : None
// return value : the point list produced
// by adding a new element of value p at 
// the end of pl. 

PointList *PL_append(PointList *pl, Point p);

//--------------------------------------
// parameters : 
// pl : a point list
// ind : an integer
// preconditions : ind must be positive 
// and strictly smaller than the number of
// of points in pl. 
// If ind has a valid value, the return value
// is the pl element whose index is ind. 
// For ind=0, the return value is the first 
// element in pl. 
// If ind does not have a valid value, the 
// return value is NULL. 

PointList *PL_index(PointList *pl, int ind);

//--------------------------------------
// parameters : 
// pl : a point list
// ind : an integer
// p : a point
// preconditions : ind must be positive 
// and strictly smaller than the number of
// of points in pl. 
// The return value is pl (if ind has an
// invalid value, pl is returned unchanged.)

PointList *PL_setPoint(PointList *pl, int ind, Point p);

//--------------------------------------
// parameters : 
// pl : a point list
// ind : an integer
// p : a point
// preconditions : none
// if ind is positive and smaller than the 
// number of elements in pl, then this function
// behaves as does PL_setPoint. 
// Otherwise, it adds enough 0 points so that 
// there is an element with index ind. And it 
// sets this element to p. 

PointList *PL_setPointExpand(PointList *pl, int ind, Point p);


//--------------------------------------
// parameters: 
// pl: a list of points
// preconditions: none
// this function return number of elements within the specifef list of points

int PL_size(PointList* pl);



#endif
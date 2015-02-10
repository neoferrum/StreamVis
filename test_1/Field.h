#pragma once
#include "Point.h"
#include "Segment.h"
class Field
{
public:
	//static 	int const count = 10;
	//Segment segments [count][count];
	Segment **segments;
	int currentSeg[2];// сегмент в котором cейчас точка - х, у
	Point p0;
	double time;
	Point S;

	void FindSegment(Point p, int segCountX, int segCountY);
	Field(void);
	Field(int, int, int, int, double, double, double, double, Point);
	//Field(Point p0);

	~Field(void);
};


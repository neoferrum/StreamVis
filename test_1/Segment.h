#pragma once
#include "Point.h"
static const double eps = 0.00000001;
class Segment
{
public:
	//static int const count = 200;
	//Point points[count][count];
	int countX, countY;

	Point **points;

	double vx1, vx2, vy1, vy2;
	double ax, bx, ay, by;
	Point p0;
	double time;

	Segment(void);
	Segment(int countX, int countY, double _vx1, double _vx2, double _vy1, double _vy2, int k, int p);
	void FunctionV(double, double, double, double, double *, double *);

	double GetTime(double v1, double v2, double coord1, double coord2, double coord0, double a, double b);
	double GetTime();
	bool CheckConsist(Point P);
	double GetCoord(double time, double v1, double v2, double coord1, double coord2, double coord0) ;
	double GetCoord(double time, double a, double v1) ;
	Point  GetCoord(double time);
	~Segment(void);
};


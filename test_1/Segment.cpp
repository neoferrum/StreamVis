#include "stdafx.h"
#include "Segment.h"
#include <iostream>
#include "Field.h"

Segment::Segment(void)
{
}
Segment::~Segment(void)
{
}

Segment::Segment(int _countX, int _countY, double _vx1, double _vx2, double _vy1, double _vy2, int k, int p)
{
	vy1 = _vy1; vy2 = _vy2; vx1 = _vx1; vx2 = _vx2;
	countX = _countX;
	countY = _countY;

	points = new Point *[countX];
			for (int i = 0; i < countX; i++) 
				points[i] = new Point[countY]; 

	for (int i = 0; i < countX; i ++)
		for (int j = 0; j < countY; j++)
			points[i][j] = Point(i + (countX-1) *k, j + (countY-1) *p);

	FunctionV(vx1, vx2, points[0][0].x, points[countX-1][0].x, &ax, &bx);
	FunctionV(vy1, vy2, points[0][0].y, points[0][countY-1].y, &ay, &by); 
}

Point Segment::CalculateMove()
{
	std::cout << vx1 <<", " << vx2 <<", " << vy1 <<", " << vy2 << "\n" ;
	time = GetTime();
	std::cout << "MoveTime = " << time << "\n";
	Point p = GetCoord(time);
	std::cout << "MoveCoord = " << p.x << ", " << p.y << "\n"; 
	return p;
}


void Segment::FunctionV(double v1, double v2, double coord1, double coord2, double *a, double *b)
{
	if (fabs(coord2-coord1) > eps)
		*a = (v2-v1)/(coord2-coord1);	
	else 
		*a = 0;
	*b = v1 - *a * coord1;				
}

double CalculateTime(double v1, double v2, double coordStart, double coordEnd, double a, double b) 
{
	double t, arg;
	if (fabs(a) < eps)
	{
		if (v1 !=0)
			t = fabs((coordEnd - coordStart)/v1);
		else
		t = DBL_MAX; 
	}
	else
	{
		if (fabs(a*coordStart + b) > eps) 
		{
			arg = fabs((a*coordEnd + b)/(a*coordStart + b));
			t = fabs(1/ a * log(arg)); 
		}
		else t = fabs(1/a);
	}
	return t;
}

double Segment::GetTime(double v1, double v2, double coord1, double coord2, double coord0, double a, double b) 
{
	if ((v1 > 0) & (v2 < 0))
	{
		return DBL_MAX; 
	}
	if (((v1 > 0) & (v2 > 0)) || ((v1 == 0) & (v2 > 0)) || ((v1 > 0) & (v2 == 0)))
	{
		return CalculateTime(v1, v2, coord0, coord2, a, b); 
	}
	if  (((v1 < 0) & (v2 < 0)) || ((v1 == 0) & (v2 < 0)) && ((v1 < 0) && (v2 == 0)))
	{
		return CalculateTime(v1, v2, coord0, coord1, a, b); 
	}
	if ((v1 < 0) & (v2 > 0))
	{
		double v0 = a*coord0 + b;
		if (v0 < 0) 
			return CalculateTime(v1, v2, coord0, coord1, a, b); 
		else 
			return CalculateTime(v1, v2, coord0, coord2, a, b);
	}
}

double Segment::GetTime()
{
	double tx = GetTime(vx1, vx2, points[0][0].x, points[countX - 1][0].x, p0.x, ax, bx);
	double ty = GetTime(vy1, vy2, points[0][0].y, points[0][countY - 1].y, p0.y, ay, by);
	if (tx <= ty)
		time = tx;
	else 
		time = ty;
	return time;
}

bool Segment::CheckConsist(Point P)
{
	if ((P.x >= points[0][0].x) & (P.x <= points[countX-1][0].x) & (P.y >= points[0][0].y) & (P.y <= points[0][countY-1].y))
		return true;
	else return false;
}

double  Segment::GetCoord(double time, double v1, double v2, double coord1, double coord2, double coord0) 
{
	//if ((v1 > 0) & (v2 < 0))
	//{
	//	std::cout << "";
	//}

	double a, b;

  if (fabs(v1 - v2) < eps)
		return time*v1;
  else 
	  {
		  if (((v1 > 0) & (v2 > 0)) || ((v1 == 0) & (v2 > 0)) || ((v1 > 0) & (v2 == 0)))
			  FunctionV(v1, v2, coord0, coord2, &a, &b);		
		  else if (((v1 < 0) & (v2 < 0)) || ((v1 == 0) & (v2 < 0)) || ((v1 < 0) && (v2 == 0)))
			  FunctionV(v1, v2, coord0, coord1, &a, &b);
		  else if ((v1 < 0) & (v2 > 0))
		  {
				FunctionV(v1, v2, coord1, coord2, &a, &b);
				double v0 = (a) *coord0 + b;
				if (v0 < 0) 
					FunctionV(v1, v2, coord0, coord1, &a, &b);
				else 
					FunctionV(v1, v2, coord0, coord2, &a, &b);
		  }
			return 1/(a) * fabs(exp(a*time));
		}
}

double  Segment::GetCoord(double time, double a, double v1) 
{

  if (fabs(a) < eps)
		return time*v1;

  else
		return 1/(a) * fabs(exp(a*time));
}
Point  Segment::GetCoord(double time)
{
	double sx = GetCoord(time, vx1, vx2, points[0][0].x, points[countX - 1][0].x, p0.x) - GetCoord(0, vx1, vx2, points[0][0].x, points[countX - 1][0].x, p0.x);
	double sy = GetCoord(time, vy1, vy2, points[0][0].y, points[0][countY - 1].y, p0.y) - GetCoord(0, vy1, vy2, points[0][0].y, points[0][countY - 1].y, p0.y);
	//double sx = GetCoord(time, ax, vx1);
	//double sy = GetCoord(time, ay, vy1);
	return Point (sx, sy);
}

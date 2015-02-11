#include "stdafx.h"
#include "Field.h"
#include <iostream>


Field::Field(void)
{
}

void FunctionV(double v1, double v2, double coord1, double coord2, double *a, double *b)
{
	if (fabs(coord2-coord1) > eps)
		*a = (v2-v1)/(coord2-coord1);	
	else 
		*a = 0;
	*b = v1 - *a * coord1;				
}

void CalculateV(int i, int countSeg, int countCells, double v1, double v2, double *segV1, double *segV2)
{
	double a, b;
	FunctionV(v1, v2, 0, countSeg*(countCells-1), &a, &b);
	if ((i == 0) & (i == (countSeg - 1)) )
	{
		*segV1 = v1;
		*segV2 = v2;
	}
	else if ((i == 0) & (i != (countSeg - 1)) )
	{
		*segV1 = v1;
		*segV2 = a*(countCells-1) + b;
	}
	else if ((i== countSeg - 1) & (i != 0) )
	{
		*segV2 = v2;
		*segV1 = a*(countSeg*(countCells-1) - countCells) + b;
	}
	else
	{
		*segV1 = a*(i*(countCells-1)) + b;
		*segV2 = a*(i*(countCells-1) + (countCells - 1)) + b;
	}
}

void Field::CalculateS(int l, int m, int countSegX, int countSegY)
{
	Point p = Field::segments[l][m].CalculateMove();
	time += segments[l][m].time;
	S.x += p.x;
	S.y += p.y;

	Field::FindSegment(S, countSegX, countSegY);
	l = Field::currentSeg[0];
	m = Field::currentSeg[1];
	std::cout << "newSeg = " << l << ", " << m << "\n";
	segments[l][m].p0 = S; 
	std::cout << "newP0 = " << segments[l][m].p0.x << ", " << segments[l][m].p0.y<< "\n";
	std::cout << "\n";


}


Field::Field(int countSegX, int countSegY, int countCellsX, int countCellsY, double vx1, double vx2, double vy1, double vy2, Point _p0)
{
       
			double SegVx1, SegVx2, SegVy1, SegVy2;
			segments = new Segment *[countSegX];
			for (int i = 0; i < countSegX; i++) 
				segments[i] = new Segment[countSegY];  

			int k = 0;
            for (int i = 0; i < countSegX; i++)
            {          
                int p = 0;
                for (int j = 0; j < countSegY; j++)
                {
					// рандом для скоростей
					CalculateV(i, countSegX, countCellsX, vx1, vx2, &SegVx1, &SegVx2);
					CalculateV(j, countSegY, countCellsY, vy1, vy2, &SegVy1, &SegVy2);
                    segments[i][j] = Segment(countCellsX, countCellsY, SegVx1, SegVx2, SegVy1, SegVy2, k, p);
                    p++;
                }
                k++;
            }
				p0 = _p0;


				Field::FindSegment(p0, countSegX, countSegY);
				int l = Field::currentSeg[0];
				int m = Field::currentSeg[1];
				std::cout << "Seg = " << l << ", " << m << "\n" << "\n";
				segments[l][m].p0 = p0; 
				time = 0;
				S.x = p0.x;
				S.y = p0.y;
				CalculateS(l, m, countSegX, countSegY);

				while ((S.x < segments[countSegX-1][0].points[countCellsX - 1][0].x) & (S.y < segments[0][countSegY-1].points[0][countCellsY-1].y)
					& (S.x > segments[0][0].points[0][0].x) & (S.y > segments[0][0].points[0][0].y) )
				{
					CalculateS(l, m, countSegX, countSegY);
				}

					std::cout << "Time = " << time << "\n";
					std::cout << "Coord = " << S.x << ", " << S.y;
}

void Field::FindSegment(Point p, int segCountX, int segCountY) 
{
	bool find;
	for (int i = 0; i < segCountX; i ++)
		for (int j = 0; j < segCountY; j++)
		{
			find = segments[i][j].CheckConsist(p);
			if (find)
			{
				currentSeg[0] = i;
                currentSeg[1] = j;
               // break; останавливается на первом найденном
			}
		}
}


Field::~Field(void)
{
}

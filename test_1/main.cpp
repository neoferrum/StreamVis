// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include "Point.h"
#include "Segment.h"
#include "Field.h"
#include <stdio.h>
#include "iostream"
#include "math.h"

void CheckCount(double count, double *var)
{
		while (count <= 0 || (count != floor(count)))
		{
			std::cout << "Type the number > 0 and integer" << "\n";
			std::cin >> count;
		}
		*var = count;
}

void CheckPoint(double coord, double countSeg, double countCells, double *var)
{
	while (coord > countSeg*(countCells-1))
	{
		std::cout << "type the coord belonging to the field" << "\n";
		std::cin >> coord;
	}
	*var = coord;
}

int main(int argc, char* argv[])
{
	double SegCountX, SegCountY, CellsCountX, CellsCountY;
	double vx1, vx2, vy1, vy2;
	Point p0;

	double count, coord;

	std::cout << "Type the count of segments horizontally" << "\n";
		std::cin >>  count;
		CheckCount(count, &SegCountX);
	std::cout << "Type the count of segments  vertical" << "\n";
		std::cin >>  count;
		CheckCount(count, &SegCountY);
	std::cout << "Type the count of cells horizontally" << "\n";
		std::cin >>  count;
		CheckCount(count, &CellsCountX);
	std::cout << "Type the count of cells  vertical" << "\n";
		std::cin >>  count;
		CheckCount(count, &CellsCountY);

	std::cout << "Type vx1" << "\n";
		std::cin >> vx1;
	std::cout << "Type vx2" << "\n";
		std::cin >> vx2;
	std::cout << "Type vy1" << "\n";
		std::cin >> vy1;
	std::cout << "Type vy2" << "\n";
		std::cin >> vy2;

	std::cout << "Type x0" << "\n";
		std::cin >> p0.x;
		//CheckPoint(coord, SegCountX, CellsCountX, &p0.x);
	std::cout << "Type y0" << "\n";
		std::cin >> p0.y;
		//CheckPoint(coord, SegCountY, CellsCountY, &p0.y);

	Field field = Field((int)SegCountX, (int)SegCountY, (int)CellsCountX, (int)CellsCountY, vx1, vx2, vy1, vy2, p0);
		
		//	field.FindSegment(field.p0, SegCountX, SegCountY);

		//	std::cout << "----------------" << "\n";

	//int i = field.currentSeg[0];
	//int j = field.currentSeg[1];

	//field.segments[i][j].p0 = field.p0; 
	//field.segments[i][j].GetTime();
	//std::cout << "t = " << field.segments[i][j].time << "\n";
	//Point p = field.segments[i][j].GetCoord(field.segments[i][j].time);
	//std::cout << field.segments[i][j].p0.x + p.x << ", " << field.segments[i][j].p0.y + p.y << "\n";

	return 0;
}


#include "field.h"


Field::Field(void) {}

void Field::FillArrV()
{
   double ax, bx, ay, by;
   Functions::FunctionV(0, nx*dx, vx1, vx2, &ax, &bx);
   Functions::FunctionV(0, ny*dy, vy1, vy2, &ay, &by);

   // скорости на границах, границ на 1 больше чем ячеек
   vx = new double[nx + 1];
   vy = new double[ny + 1];

   // заполнение массивов скоростей
   for (int i = 0; i < (nx + 1); i++)
           Functions::CalculateVforCell(i, nx, dx, vx1, vx2, ax, bx, &vx[i]);
   for (int j = 0; j < (ny + 1); j++)
           Functions::CalculateVforCell(j, ny, dy, vy1, vy2, ay, by, &vy[j]);
   //--------------------------------
}

void Field::FillArrCoord()
{
    x = new double[nx + 1];
    y = new double[ny + 1];
   for (int i = 0; i <= nx; i ++)
       x[i] = dx*i;
   for (int j = 0; j <= ny; j ++)
       y[j] = dy*j;
}

void Field::CalculateNewP0(double startX, double startY, double *moveX, double *moveY, double *t)
{
    int i = Functions::FindStartCell(x, nx, startX);
    int j = Functions::FindStartCell(y, ny, startY);

    double ax = 0, bx = 0, ay = 0, by =0;

    Functions::FunctionV(x[i], x[i + 1], vx[i], vx[i + 1], &ax, &bx);
    //Functions::FunctionV(40, 60, 7, 10, &ax, &bx);
    Functions::FunctionV(y[j], y[j + 1], vy[j], vy[j + 1], &ay, &by);

    double tx = Functions::GetTime(vx[i], vx[i + 1], x[i], x[i + 1], startX, ax, bx);
    double ty = Functions::GetTime(vy[i], vy[i+1], y[i], y[i+1], startY, ay, by);
    if (((tx <= ty) & (tx > eps)) || (ty < eps))
        *t = tx;
    else
        *t = ty;

    // расстояние от точки р0 до точки выхода
    *moveX = startX + Functions::GetCoord(*t, vx[i], vx[i + 1], x[i], x[i + 1], startX);
    *moveY = startY + Functions::GetCoord(*t, vy[j], vy[j+1], y[j], y[j+1], startY);
}




//void Field::CalculateS(int l, int m, int countSegX, int countSegY)
//{
//	Point p = Field::segments[l][m].CalculateMove();
//	time += segments[l][m].time;
//	S.x += p.x;
//	S.y += p.y;

//	Field::FindSegment(S, countSegX, countSegY);
//	l = Field::currentSeg[0];
//	m = Field::currentSeg[1];
//	std::cout << "newSeg = " << l << ", " << m << "\n";
//	segments[l][m].p0 = S;
//	std::cout << "newP0 = " << segments[l][m].p0.x << ", " << segments[l][m].p0.y<< "\n";
//	std::cout << "\n";


//}


//Field::Field(int countSegX, int countSegY, int countCellsX, int countCellsY, double vx1, double vx2, double vy1, double vy2, Point _p0)
//{
       
//			double SegVx1, SegVx2, SegVy1, SegVy2;
//			segments = new Segment *[countSegX];
//			for (int i = 0; i < countSegX; i++)
//				segments[i] = new Segment[countSegY];

//			int k = 0;
//            for (int i = 0; i < countSegX; i++)
//            {
//                int p = 0;
//                for (int j = 0; j < countSegY; j++)
//                {
//					// рандом для скоростей
//					CalculateV(i, countSegX, countCellsX, vx1, vx2, &SegVx1, &SegVx2);
//					CalculateV(j, countSegY, countCellsY, vy1, vy2, &SegVy1, &SegVy2);
//                    segments[i][j] = Segment(countCellsX, countCellsY, SegVx1, SegVx2, SegVy1, SegVy2, k, p);
//                    p++;
//                }
//                k++;
//            }
//				p0 = _p0;


//				Field::FindSegment(p0, countSegX, countSegY);
//				int l = Field::currentSeg[0];
//				int m = Field::currentSeg[1];
//				std::cout << "Seg = " << l << ", " << m << "\n" << "\n";
//				segments[l][m].p0 = p0;
//				time = 0;
//				S.x = p0.x;
//				S.y = p0.y;
//				CalculateS(l, m, countSegX, countSegY);

//				while ((S.x < segments[countSegX-1][0].points[countCellsX - 1][0].x) & (S.y < segments[0][countSegY-1].points[0][countCellsY-1].y)
//					& (S.x > segments[0][0].points[0][0].x) & (S.y > segments[0][0].points[0][0].y) )
//				{
//					CalculateS(l, m, countSegX, countSegY);
//				}

//					std::cout << "Time = " << time << "\n";
//					std::cout << "Coord = " << S.x << ", " << S.y;
//}




Field::~Field(void)
{
}

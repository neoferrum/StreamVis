#pragma once

class Field
{
public:
    //Cells **cells;

    int nx, ny;
    double dx, dy;
    double x0, y0;
    double vx1, vx2, vy1, vy2;

    double *vx;            // ������ �������������� ���������
    double *vy;            // ������ ������������ ���������

    double time;            // ����� ����� ��������
    double X, Y;            // �������� ����������

    Field(void);
    //Field(int nx, int ny);
    void CalculateV();

        //int currentSeg[2];// ������� � ������� c����� ����� - �, �
        //Point p0;
        //Point S;

        //void FindSegment(Point p, int segCountX, int segCountY);
        //void CalculateS(int l, int m, int countSegX, int countSegY);

        //Field(int, int, int, int, double, double, double, double, Point);
	//Field(Point p0);

	~Field(void);
};


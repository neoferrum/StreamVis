#pragma once
#include "functions.h"
#include <iostream>
#include "cmath"

class Field
{
public:
    int nx, ny;
    double dx, dy;
    double x0, y0;
    double vx1, vx2, vy1, vy2;

    double time;           // ����� ����� ��������
    double X, Y;           // �������� ����������

    Field(void);
    ~Field(void);

    void FillArrV();
    void FillArrCoord();
    void GetTime();
    void CalculateNewP0(double startX, double startY, double *moveX, double *moveY, double *t);

    double *vx;            // ������ �������������� ���������
    double *vy;            // ������ ������������ ���������

    double *x, *y;         // ������ � ������������ �� ����� �����

    double *tx, *ty;


    double ax, bx, ay, by;

};


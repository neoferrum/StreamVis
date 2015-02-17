#pragma once

class Field
{
public:
    int nx, ny;
    double dx, dy;
    double x0, y0;
    double vx1, vx2, vy1, vy2;

    double *vx;            // ������ �������������� ���������
    double *vy;            // ������ ������������ ���������

    double time;            // ����� ����� ��������
    double X, Y;            // �������� ����������

    double ax, bx, ay, by;

    Field(void);
    ~Field(void);



    void CalculateV();
    void GetTime();



};


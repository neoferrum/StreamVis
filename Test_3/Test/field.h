#pragma once

class Field
{
public:
    int nx, ny;
    double dx, dy;
    double x0, y0;
    double vx1, vx2, vy1, vy2;

    double *vx;            // массив горизонтальных скоростей
    double *vy;            // массив вертикальных скоростей

    double time;            // общее время движения
    double X, Y;            // конечные координаты

    double ax, bx, ay, by;

    Field(void);
    ~Field(void);



    void CalculateV();
    void GetTime();



};


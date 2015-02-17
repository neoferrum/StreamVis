#include "functions.h"
#include "math.h"
Functions::Functions()
{
}

void Functions::FunctionV(double coord1, double coord2, double v1, double v2, double *a, double *b)
{
    if (fabs(coord2-coord1) > eps)
        *a = (v2-v1)/(coord2-coord1);
    else
        *a = 0;
    *b = v1 - *a * coord1;
}

void Functions::CalculateVforCell (int i, int N, double dS, double v1, double v2, double a, double b, double *V)
{
    if (i == 0)
        *V = v1;

    else if (i == N)
        *V = v2;

    else
        *V = a*dS*i + b;
}

void Functions::CalculateTime()
{
}

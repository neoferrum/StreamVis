#include "functions.h"
#include "math.h"
#include <float.h>

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

double Functions::CalculateTime(double v1, double v2, double coordStart, double coordEnd, double a, double b)
{
    double arg;

    if ((fabs(v2 - v1) < eps) & (fabs(a) < eps))
        return 0;

    else if ((fabs(v2 - v1) < eps) & (fabs(a) > eps))
        return fabs((coordEnd - coordStart)/v1);

    else if ((coordEnd - coordStart) < eps)
        return 0;

    else if (fabs(a*coordStart + b) < eps)
        return 0;     //////////// ?????????????

    else if (fabs(a*coordStart + b) > eps)
    {
        arg = fabs((a*coordEnd + b)/(a*coordStart + b));
        return fabs(1/ a * log(arg));
    }
}


double Functions::GetTime(double v1, double v2, double coord1, double coord2, double coord0, double a, double b)
{
    if ((v1 > 0) & (v2 < 0))
        return DBL_MAX;

    if (((v1 > 0) & (v2 > 0)) || ((v1 == 0) & (v2 > 0)) || ((v1 > 0) & (v2 == 0)))
        return CalculateTime(v1, v2, coord0, coord2, a, b);

    if (((v1 < 0) & (v2 < 0)) || ((v1 == 0) & (v2 < 0)) && ((v1 < 0) && (v2 == 0)))
        return CalculateTime(v1, v2, coord0, coord1, a, b);

    if ((v1 < 0) & (v2 > 0))
    {
        double v0 = a*coord0 + b;
        if (v0 < 0)
            return CalculateTime(v1, v2, coord0, coord1, a, b);
        else
            return CalculateTime(v1, v2, coord0, coord2, a, b);
    }
}

double Functions::GetCoord(double time, double v1, double v2, double coord1, double coord2, double coord0)
{
//if ((v1 > 0) & (v2 < 0))
//{
// std::cout << "";
//}
double a, b;
if (fabs(v2 - v1) < eps)
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



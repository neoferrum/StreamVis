#ifndef FUNCTIONS_H
#define FUNCTIONS_H

double const eps = 0.0001;
class Functions
{
public:
    Functions();
    static void FunctionV(double coord1, double coord2, double v1, double v2, double *a, double *b);
    static void CalculateVforCell(int i, int N, double dS, double v1, double v2, double a, double b, double *V);
    static double CalculateTime(double v1, double v2, double coord1, double coord2, double a, double b);
    static double GetTime(double v1, double v2, double coord1, double coord2, double coord0, double a, double b);
    static double GetCoord(double time, double v1, double v2, double coord1, double coord2, double coord0);
};

#endif // FUNCTIONS_H

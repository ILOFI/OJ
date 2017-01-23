#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
    if (x != 0) return (1 / (x * x) - pow(sin(x), 4));
    else return -1;
}

double getxmin(double a, double b)
{
    double x_min = a, ya = f(a), yb = f(b);
    while (fabs(ya - yb) >= 0.00001)
    {
        double x1 = a + 0.382 * (b - a), x2 = a + 0.618 * (b - a);
        double y1 = f(x1), y2 = f(x2);
        if (y1 < y2)
        {
            x_min = x1; b = x2; yb = y2;
        }
        else
        {
            x_min = x2; a = x1; ya = y1;
        }
    }
    return (x_min);
}

int main()
{
    double x_min = getxmin(4, 6);
    cout << x_min << endl << f(x_min) << endl;
    return 0;
}

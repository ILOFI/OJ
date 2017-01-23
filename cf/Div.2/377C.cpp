#include <iostream>
#include<stdio.h>
#define max(x, y) ((x) > (y) ? (x) : (y))
#define min(x, y) ((x) < (y) ? (x) : (y))
using namespace std;

typedef long long ll;


int main()
{
    ll dir[16][3] = {{0, 0, 0}, {0, 0, -1}, {0, -1, -1}, {-1, -1, -1},
                 {-1, 0, 0}, {-1, 0, -1}, {-1, -1, -1}, {-2, -1, -1},
                 {-1, -1, 0}, {-1, -1, -1}, {-1, -2, -1}, {-2, -2, -1},
                 {-1, -1, -1}, {-1, -1, -2}, {-1, -2, -2}, {-2, -2, -2}};
    ll b, d, s, days, missed = 0ll;
    scanf("%I64d%I64d%I64d", &b, &d, &s);
    days = b > d ? b : d;
    days = days > s ? days : s;
    missed = days * 3;
    for (int i = 0; i < 15; i++)
    {
        ll tb, td, ts;
        tb = days + dir[i][0] - b;
        td = days + dir[i][1] - d;
        ts = days + dir[i][2] - s;
        if (tb >= 0 && td >= 0 && ts >= 0)
        {
            missed = min(missed, (tb + td + ts));
        }
    }
    days++;
    for (int i = 0; i < 15; i++)
    {
        ll tb, td, ts;
        tb = days + dir[i][0] - b;
        td = days + dir[i][1] - d;
        ts = days + dir[i][2] - s;
        if (tb >= 0 && td >= 0 && ts >= 0)
        {
            missed = min(missed, (tb + td + ts));
        }
    }

    printf("%I64d\n", missed);
    return 0;
}

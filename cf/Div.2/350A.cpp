#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n, maxd, mind, u, v;
    cin >> n;
    u = n / 7;
    v = (n - 2) / 7;
    mind = u * 2;
    u = n - u * 7;
    mind += u > 5 ? (7 - u) : 0;
    maxd = v * 2 + 2;
    v = (n - 2) - v * 7;
    maxd += v > 5 ? (7 - v) : 0;
    if (n < 2) cout << 0 << ' ' << n << endl;
    else cout << mind << ' ' << maxd << endl;
    return 0;
}

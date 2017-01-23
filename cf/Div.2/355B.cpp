#include <iostream>

#define MAXSIZE 100020

using namespace std;

int main()
{
    long long n, h, k, cur = 0LL, sec = 0LL, a[MAXSIZE];
    int i;
    cin >> n >> h >> k;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    i = 1;
    while (i <= n)
    {
        while (i <= n && cur + a[i] <= h) cur += a[i++];
        cur -= k;
        if (cur < 0) cur = 0;
        sec++;
        if (i <= n)
        {
            long long delta = min(cur + a[i] - h, cur);
            if (delta > k)
            {
                cur -= delta;
                sec += delta / k;
                delta %= k;
                cur += delta;
            }
        }
    }
    sec += cur / k;
    cur %= k;
    if (cur > 0) sec++;
    cout << sec << endl;
}

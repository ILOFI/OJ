#include <iostream>

#define MAXSIZE 100020

using namespace std;

int n, k, a[MAXSIZE], b[MAXSIZE];

bool canbake(int amount)
{
    int val = 0, i;
    for (i = 1; i <= n; i++)
    {
        if (b[i] < a[i] * amount)
            val += a[i] * amount - b[i];
        if (val > k) return false;
    }
    return true;
}

int bin_search(int u, int v)
{
    int l = u, r = v, mid;
    while (l < r)
    {
        mid = (r - l) / 2 + l;
        if (canbake(mid))
            l = mid + 1;
        else r = mid - 1;
    }
    if (!canbake(l)) --l;
    return l;
}

int main()
{
    int i, ans;
    cin >> n >> k;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
        cin >> b[i];

    ans = bin_search(0, (b[1] + k) / a[1]);
    cout << ans;
    return 0;
}

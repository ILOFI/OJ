#include <stdio.h>
#include <iostream>

#define S(i) ((i) * ((i) + 1) / 2)

using namespace std;

int main()
{
    int n, k, id[100010], i, l, r, mid;
    cin >> n >> k;
    for (i = 1; i <= n; i++)
        cin >> id[i];
    //binary search for i
    /*l = 0; r = n;
    while (l < r)
    {
        mid = (r - l) / 2 + l;
        if (S(mid) < k && S(mid + 1) >= k) break;
        if (S(mid) >= k) r = mid;
        else if (S(mid + 1) < k) l = mid + 1;
    }
    //cout << mid << endl;
    cout << id[k - S(mid)] << endl;*/
    for (i = 0; k - i > 0; i++)
        k = k - i;
    cout << id[k] << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int sum = 0, tmp, i, ans, u;
    int times[101] = {0};
    for (i = 0; i < 5; i++)
    {
        cin >> tmp;
        times[tmp]++;
        sum += tmp;
    }
    ans = sum;
    for (i = 100; i >= 1; i--)
    {
        if (times[i] >= 2)
        {
            u = times[i] > 3 ? 3 : times[i];
            tmp = sum - i * u;
            ans = tmp < ans ? tmp : ans;
        }
    }
    cout << ans << endl;
    return 0;
}
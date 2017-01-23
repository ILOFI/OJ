#include <iostream>

using namespace std;

int main()
{
    int n, a, t[150], i, sum = 0;
    cin >> n >> a;
    for (i = 1; i <= n; i++)
        cin >> t[i];
    if (t[a] == 1) sum++;
    int flag = 1;
    for (int l = a - 1, r = a + 1; l >= 1 || r <= n; l--, r++)
    {
        if (l < 1 || r > n) flag = 0;
        if (flag == 1)
            if (t[l] == t[r] && t[l] == 1) sum += 2;
        if (flag == 0)
        {
            if (l >= 1 && t[l] == 1) sum++;
            else
                if (r <= n && t[r] == 1) sum++;
        }
    }
    cout << sum << endl;
    return 0;
}

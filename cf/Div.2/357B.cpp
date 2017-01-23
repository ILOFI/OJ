#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k, flag = 0;

    cin >> n;
    for (i = 0; i * 1234567 <= n; i++)
    {
        for (j = 0; i * 1234567 + j * 123456 <= n; j++)
        {
            k = n - (i * 1234567 + j * 123456);
            if (k % 1234 == 0) flag = 1;
            if (flag == 1) break;
        }
        if (flag == 1) break;
    }
    if (flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

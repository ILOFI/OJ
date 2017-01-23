#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
    int n, m, t, i;
    ll numN[5], numM[5], sum = 0LL;

    cin >> n >> m;
    t = n - (n % 5);
    for (i = 0; i < 5; i++)
        numN[i] = t / 5;
    for (i = t + 1; i <= n; i++)
        numN[i % 5]++;

    t = m - (m % 5);
    for (i = 0; i < 5; i++)
        numM[i] = t / 5;
    for (i = t + 1; i <= m; i++)
        numM[i % 5]++;

    for (i = 0; i < 5; i++)
        sum += numN[i] * numM[(5 - i) % 5];

    cout << sum << endl;
    return 0;
}

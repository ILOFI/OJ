#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, i, now, a[100500];

    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + n + 1);

    now = 1;
    for (i = 1; i <= n; i++)
        if (a[i] >= now) now++;

    cout << now << endl;
}

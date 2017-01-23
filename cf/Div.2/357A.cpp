#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char handle[15];
    int flag = 0, i, n, before, after;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        scanf("%s %d %d", handle, &before, &after);
        if (before >= 2400 && after > before)
            flag = 1;
        if (flag == 1) break;
    }
    if (flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

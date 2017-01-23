#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, m, i, j, flag = 0;
    char data;

    cin >> n >> m;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
        {
            scanf(" %c", &data);
            if (data == 'C' || data == 'M' || data == 'Y')
                flag = 1;
        }

    if (flag == 0) cout << "#Black&White" << endl;
    else cout << "#Color" << endl;
    return 0;
}

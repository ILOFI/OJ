#include <iostream>
#include <stdio.h>
#include <algorithm>

#define MAXN 100100

using namespace std;

int main()
{
    int n, m, ans = 0, have[MAXN], i, j, way[MAXN] = {0};
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &have[i]);
    sort(have, have + n);
    for (i = 1, j = 0; ; i++)
    {
        if (have[j] == i && j < n)
        {
            j++;
            continue;
        }
        if (ans + i > m) break;
        ans += i;
        way[++way[0]] = i;
    }
    printf("%d\n", way[0]);
    for (i = 1; i <= way[0]; i++)
    {
        printf("%d", way[i]);
        if (i != way[0]) putchar(' ');
        else putchar('\n');
    }
    return 0;
}

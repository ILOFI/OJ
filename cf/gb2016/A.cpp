#include <iostream>
#include <stdio.h>

#define MAXTIME 240

using namespace std;

int main()
{
    int n, k, ans;
    scanf("%d%d", &n, &k);
    for (ans = n; ans >= 0; ans--)
        if (((5 * (1 + ans) * ans) / 2 + k) <= MAXTIME) break;
    printf("%d\n", ans);
    return 0;
}

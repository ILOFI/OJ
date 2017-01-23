
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, k, i, addi = 0,  a[510], t;
    scanf("%d%d", &n, &k);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (i > 1)
        {
             t = k - a[i - 1] - a[i];
             if (t > 0)
             {
                 addi += t;
                 a[i] += t;
             }
        }
    }

    printf("%d\n%d", addi, a[1]);
    for (i = 2; i <= n; i++)
        printf(" %d", a[i]);
    putchar('\n');
    return 0;


}

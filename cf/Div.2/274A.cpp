#include <stdio.h>

using namespace std;

#define MAX(x, y) ((x) > (y) ? (x) : (y))

/*
    a * b * c
    a * b + c
    a + b * c
    a + b + c
    (a + b) * c
    a * (b + c)
*/

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int ans = 0;
    ans = MAX(ans, a * b * c);
    ans = MAX(ans, a * b + c);
    ans = MAX(ans, a + b * c);
    ans = MAX(ans, a + b + c);
    ans = MAX(ans, (a + b) * c);
    ans = MAX(ans, a * (b + c));
    printf("%d\n",ans);
    return 0;
}

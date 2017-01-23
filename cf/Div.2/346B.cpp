#include <stdio.h>
#include <iostream>
#include <algorithm>

#define MAXN 100100

using namespace std;

struct person
{
    char name[15];
    int region, score;
} p[MAXN];

bool cmp(struct person x, struct person y)
{
    if (x.region == y.region) return x.score > y.score;
    else return x.region < y.region;
}

int main()
{
    int n, m, i, j, now;
    while (~scanf("%d %d", &n, &m))
    {
        for (i = 0; i < n; i++)
            scanf("%s %d %d", p[i].name, &p[i].region, &p[i].score);
        sort(p, p + n, cmp);
        now = 1;
        for (i = 0; i < n; i++)
        {
            if (now > m) break;
            while (p[i].region < now && i < n - 1) ++i;
            if (p[i + 1].region == p[i + 2].region && p[i + 1].score == p[i + 2].score)
                printf("?\n");
            else
                printf("%s %s\n", p[i].name, p[i + 1].name);
            ++now;
        }
    }
    return 0;

}

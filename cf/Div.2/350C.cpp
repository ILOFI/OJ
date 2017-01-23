#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <malloc.h>

#define MAXSIZE 200010

using namespace std;

struct node
{
    int lan;
    int cnt;
};
typedef struct node * nodePtr;
nodePtr lannode[MAXSIZE];
int curlancnt, audio[MAXSIZE], subti[MAXSIZE];

int findIndex(int lanno)
{
    int i = curlancnt;
    lannode[i] = (nodePtr) malloc(sizeof(struct node));
    lannode[i]->lan = lanno;
    lannode[i]->cnt = 0;
    curlancnt++;
    return i;
}

bool comp(const nodePtr x, const nodePtr y)
{
    return x->lan < y->lan;
}

void addTime(int lanno, int times)
{
    int i = findIndex(lanno);
    lannode[i]->cnt = times;
}

int getCnt(int lanno)
{
    nodePtr t = (nodePtr) malloc(sizeof(struct node));
    t->lan = lanno;
    nodePtr * p = lower_bound(lannode, lannode + curlancnt, t, comp);
    if ((*p) != NULL && (*p)->lan == lanno)
    return (*p)->cnt;
    else return 0;
}

int main()
{
    int n, m, i, lanno, spec[MAXSIZE];
    curlancnt = 0;
    memset(lannode, 0, sizeof(lannode));
    memset(audio, 0, sizeof(audio));
    memset(subti, 0, sizeof(subti));
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> spec[i];
    }
    cin >> m;
    for (i = 1; i <= m; i++)
        cin >> audio[i];
    for (i = 1; i <= m; i++)
        cin >> subti[i];

    sort(spec, spec + n);
    i = 0; int now = spec[0], cnt = 0;
    for (i = 0; i < n; i++)
    {
        if (spec[i] == now) cnt++;
        else
        {
            addTime(now, cnt);
            now = spec[i];
            cnt = 1;
        }
    }
    addTime(now, cnt);
    //sort(lannode, lannode + curlancnt, comp);

    int chosen = 1, pleased = 0, satisfied = 0, u, v;
    for (i = 1; i <= m; i++)
    {
        u = getCnt(audio[i]);
        if (u < pleased) continue;
        v = getCnt(subti[i]);
        if (u > pleased || (u == pleased && v > satisfied))
        {
            pleased = u;
            satisfied = v;
            chosen = i;
        }
    }

    cout << chosen << endl;
}

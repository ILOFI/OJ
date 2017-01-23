#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

struct notif
{
    int id;
    int type;
    char read;
};
typedef struct notif noti;

int main()
{
    int n, q, i, j, o, x, sum = 0, now = 0, lastt = 0, flag = 0;
    noti item;
    vector<noti> vec;
    vector<noti>::iterator it, last, que;
    scanf("%d%d", &n, &q);
    for (i = 1; i <= q; i++)
    {
        scanf("%d%d", &o, &x);
        if (o == 1)
        {
            now++;
            item.type = x;
            item.read = 0;
            item.id = now;
            vec.push_back(item);
            sum++;
        }
        if (o == 2)
        {
            for (it = vec.begin(); it != vec.end(); it++)
                if ((*it).type == x && (*it).read == 0)
                {
                    (*it).read = 1;
                    sum--;
                }

            for (it = vec.begin(); it != vec.end(); it++)
                {
                    if (flag == 1)
                    {
                        vec.erase(que);
                        flag = 0;
                        it--;
                    }
                    if ((*it).read == 1)
                    {
                        flag = 1;
                        que = it;
                    }
                }
            if (flag == 1)
                {
                    vec.erase(que);
                    flag = 0;
                }
        }
        if (o == 3)
        {
            for (it = vec.begin(); (it != vec.end()) && ((*it).id <= x); it++)
                if ((*it).read == 0)
                {
                    (*it).read = 1;
                    sum--;
                }

            for (it = vec.begin(); (it != vec.end()) && ((*it).id <= x); it++)
                {
                    if (flag == 1)
                    {
                        vec.erase(que);
                        flag = 0;
                        it--;
                    }
                    if ((*it).read == 1)
                    {
                        flag = 1;
                        que = it;
                    }
                }
            if (flag == 1)
            {
                vec.erase(que);
                flag = 0;
            }

        }
        printf("%d\n", sum);
    }

    return 0;
}

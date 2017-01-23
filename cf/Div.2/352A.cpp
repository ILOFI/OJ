#include <stdio.h>
#include <iostream>
#include <string.h>
#include <malloc.h>

#define MAXLEN 1600
#define MAXDIG 20

using namespace std;

char * ToString(int num)
{
    char * rtn = (char *) malloc(sizeof(MAXLEN + 1));
    int i = 0;
    while (num != 0)
    {
        rtn[i++] = num % 10 + '0';
        num /= 10;
    }
    rtn[i] = '\0';
    return rtn;
}

int main()
{
    char bits[MAXLEN], digs[MAXLEN];
    int curbit, curnum, n, i;
    curbit = curnum = 0;
    cin >> n;
    while (curbit < n)
    {
        curnum++;
        digs[0] = 0;
        strcpy(digs, ToString(curnum));
        for (i = strlen(digs) - 1; i >= 0; i--)
        {
            bits[curbit++] = digs[i];
        }

    }
    cout << bits[n - 1] << endl;
    return 0;
}

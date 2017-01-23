#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int primes[] = {1, 2, 3, 5, 7, 11, 13, 15, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    int i, times = 0;
    char resp[5];
    for (i = 1; i <= 17; i++)
    {
        resp[0] = 0;
        cout << primes[i] << endl;
        fflush(stdout);
        scanf("%s", resp);
        if (resp[0] == 'y')
        {
            times++;
            int tmp = primes[i] * primes[i];
            while (tmp <= 100)
            {
                resp[0] = 0;
                cout << tmp << endl;
                fflush(stdout);
                scanf("%s", resp);
                if (resp[0] == 'y')
                {
                    times++;
                }
                break;
            }
        }
        if (times >= 2) break;
    }
    if (times >= 2) cout << "composite" << endl;
    else cout << "prime" << endl;
    return 0;
}


#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    cout << "I hate";
    for (i = 1; i <= n; i++)
    {
        if (i == n) cout << " it" << endl;
        else
        {
            if (i % 2 == 1) cout << " that I love";
            else cout << " that I hate" ;
        }
    }
    return 0;
}

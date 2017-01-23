#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
    ll sum = 0LL;
    int n, i, a;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        sum = sum + (a - 1);
        if (sum % 2 == 0) cout << "2" << endl;
        else cout << "1" << endl;
    }
    return 0;
}

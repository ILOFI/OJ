#include <iostream>

using namespace std;

int main()
{
    int n, h, i, a, ans = 0;
    cin >> n >> h;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        ans += a > h ? 2 : 1;
    }
    cout << ans << endl;
    return 0;
}

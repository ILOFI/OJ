#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int cnt[30] = {0}, i, n, ans = 0;
    char ch;
    scanf("%d ", &n);
    if (n > 26)
    {
        cout << -1 << endl;
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        ch = getchar();
        cnt[ch - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {
        ans += (cnt[i] > 1) ? (cnt[i] - 1) : 0;
    }
    cout << ans << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int i, n, mi, ci, m = 0, c = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> mi >> ci;
        if (mi > ci) m++;
        if (ci > mi) c++;
    }
    if (m > c) cout << "Mishka" << endl;
    else
        if (c > m) cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
    return 0;
}

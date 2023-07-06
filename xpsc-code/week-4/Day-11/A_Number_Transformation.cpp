#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int x, y;
        cin >> x >> y;
        if (y < x || y % x != 0)
        {
            cout << 0 << " " << 0 << endl;
        }
        else if (x == y)
        {
            cout << 1 << " " << 1 << endl;
        }
        else
        {
            cout << 1 << " " << (y / x) << '\n';
        }
    }
    return 0;
}
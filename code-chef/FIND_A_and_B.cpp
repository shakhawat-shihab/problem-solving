#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if ((y * z) % x == 0)
        {
            cout << y * z << " " << x << endl;
        }
        else if ((y * x) % z == 0)
        {
            cout << y * x << " " << z << endl;
        }
        else if ((x * z) % y == 0)
        {
            cout << x * z << " " << y << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
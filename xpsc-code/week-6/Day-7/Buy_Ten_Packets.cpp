#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int x, y;
        cin >> x >> y;
        double px = x / 2.0;
        double py = y / 4.0;
        if (px <= py)
        {
            cout << x * 5 << endl;
        }
        else
        {
            cout << 2 * y + x << endl;
        }
    }
    return 0;
}
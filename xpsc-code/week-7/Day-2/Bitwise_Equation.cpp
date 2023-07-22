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
        ll n;
        cin >> n;

        if (n == 0)
        {
            cout << 3 << " " << 5 << " " << 6 << " " << 7 << endl;
            continue;
        }

        ll c = 0, d;
        for (int i = 3; i < 1e9; i++)
        {
            ll crntD = i ^ n;
            if ((i ^ n) > 2 && crntD != i)
            {
                c = i;
                d = crntD;
                break;
            }
        }
        if (c == 0)
            cout << -1 << endl;
        else
            cout << 1 << " " << 2 << " " << c << " " << d << endl;
    }
    return 0;
}
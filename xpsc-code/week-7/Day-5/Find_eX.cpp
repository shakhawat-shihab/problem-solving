#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getGcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return getGcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a + 1) % b == (c + 1) % d)
        {
            cout << 1 << endl;
        }
        else
        {
            ll lcm = (b * d) / getGcd(b, d);
            cout << lcm - (a % b) << endl;
        }
    }
    return 0;
}
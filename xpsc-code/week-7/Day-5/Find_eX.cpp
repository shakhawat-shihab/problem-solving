#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int getGcd(int a, int b)
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a + 1) % b == (c + 1) % d)
        {
            cout << 1 << endl;
        }
        else
        {
            ll ans = a - (a % b);
            int lcm = (b * d) / getGcd(b, d);
            ans += lcm;
            cout << ans - a << endl;
        }
    }
    return 0;
}
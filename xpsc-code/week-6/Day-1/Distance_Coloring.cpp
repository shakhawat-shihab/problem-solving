#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll md = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        ll n, k;
        cin >> n >> k;
        if (k == 1)
        {
            cout << 1 << endl;
        }
        else if (k > n)
        {
            ll ans = 1;
            for (int i = 1; i <= n; i++)
            {
                ans = (ans * k) % md;
                k--;
            }
            cout << ans << endl;
        }
        else if (n >= k)
        {
            int color = k;
            ll ans = 1;
            for (int i = 1; i <= color; i++)
            {
                ans = (ans * k) % md;
                k--;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
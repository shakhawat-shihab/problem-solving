#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll md = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    for (ll Case = 1; Case <= t; Case++)
    {
        ll n;
        cin >> n;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }

        ll ans = 0;
        ll prvs = 1;
        for (ll i = 1;; i++)
        {
            if (mp[i])
            {
                prvs = (prvs * mp[i]) % md;
                ans = (ans + prvs) % md;
            }
            else
            {
                break;
            }
            // cout << i << " " << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}
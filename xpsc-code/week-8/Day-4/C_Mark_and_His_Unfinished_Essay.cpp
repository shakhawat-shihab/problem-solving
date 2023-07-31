#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vi vector<ll>
#define vll vector<ll>
#define mii map<ll, ll>
#define mii map<ll, ll>
#define pii pair<ll, ll>
#define pll pair<ll, ll>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    for (ll Case = 1; Case <= t; Case++)
    {
        ll n, c, q;
        cin >> n >> c >> q;
        string s;
        cin >> s;
        vector<pair<ll, ll>> op(c);
        vector<pair<ll, ll>> sg(c);
        ll curLen = n;
        for (ll i = 0; i < c; i++)
        {
            ll l, r;
            cin >> l >> r;
            op[i] = {l, r};
            sg[i] = {curLen + 1, curLen + (r - l + 1)};
            curLen = sg[i].second;
        }
        while (q--)
        {
            ll x;
            cin >> x;
            if (x <= n)
            {
                cout << s[x - 1] << endl;
                continue;
            }
            for (ll i = c - 1; i >= 0; i--)
            {
                if (x >= sg[i].first && x <= sg[i].second)
                {
                    x = op[i].first + (x - sg[i].first);
                }
            }
            // cout << x << endl;
            cout << s[x - 1] << endl;
        }
    }
    return 0;
}
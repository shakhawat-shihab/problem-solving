#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, k;
    cin >> n >> m >> k;
    while (k--)
    {
        ll sum;
        cin >> sum;

        vector<ll> ans(n + 1);
        ll reqVal = sum;
        ll end = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll val = i * m;
            if (val == reqVal)
            {
                ans[i] = m;
                end = i;
                break;
            }
            else if (reqVal > val)
            {
                ans[i] = m;
                reqVal = reqVal - val;
            }
            else if (reqVal < val)
            {
                ll x = ceil((double)reqVal / i);
                // cout << "reqVal " << reqVal << endl;
                // cout << "i " << i << endl;
                // cout << "x " << x << endl;
                ll added = x * i;
                ll xtra = added - reqVal;

                ans[i] = x;
                ans[xtra]--;
                end = i;
                break;
            }
        }

        ll i = 1;
        cout << i << " " << end << endl;
        while (i <= end)
        {
            cout << ans[i] << " ";
            i++;
        }
        cout << endl;
    }

    return 0;
}
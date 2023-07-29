#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <functional>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    // vector<ll> inv(n + 1);
    for (ll i = 1; i <= n; i++)
        cin >> v[i];
    pbds<int> os;
    ll ans = 0;

    for (ll i = 1; i <= n; i++)
    {
        if (i == 1)
            os.insert(v[i]);
        else
        {
            os.insert(v[i]);
            ll tot = (ll)os.size(), big, small;
            small = os.order_of_key(v[i]);
            // inv[i] = small;
            small++;
            big = (tot - small);
            ans += big;
        }
    }

    // for (ll i = 1; i <= n; i++)
    // {
    //     cout << inv[i] << " ";
    // }
    // cout << endl;

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        solve();
    }
    return 0;
}
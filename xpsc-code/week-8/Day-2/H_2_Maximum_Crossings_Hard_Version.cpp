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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n;
        cin >> n;
        int arr[n];
        pbds<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ans = 0;
        vector<int> inv(n);

        for (int i = n - 1; i >= 0; i--)
        {
            ll inversion = s.order_of_key(arr[i] + 1);
            inv[i] = inversion;
            ans += inversion;
            s.insert(arr[i]);
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << inv[i] << " ";
        // }
        // cout << endl;

        // for (auto val : s)
        // {
        //     cout << val << " ";
        // }
        // cout << endl;

        cout << ans << endl;
    }
    return 0;
}
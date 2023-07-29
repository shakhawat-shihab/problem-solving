#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        pbds<int> s;
        ll ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int inversionCnt = s.order_of_key(arr[i]);
            ans += inversionCnt;
            s.insert(arr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
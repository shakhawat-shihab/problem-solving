#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbdsLess = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    pbdsLess<int> s1;

    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> inversion(n);
    for (int i = n - 1; i >= 0; i--)
    {
        ll inversionCnt = s1.order_of_key(arr[i]);
        inversion[i] = inversionCnt;
        s1.insert(arr[i]);
    }

    // for (int i = 0; i < n; i++)
    //     cout << inversion[i] << " ";

    s1.clear();
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll inversionCnt = s1.order_of_key(arr[i]);
        cnt += (inversion[i] * (s1.size() - inversionCnt));
        s1.insert(arr[i]);
    }

    cout << cnt << endl;

    return 0;
}
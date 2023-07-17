#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lower_bound(vector<ll> arr, ll tar, ll n)
{
    ll l = 0, h = n - 1;
    ll ans = n;
    while (l <= h)
    {
        ll mid = l + (h - l) / 2;
        if (arr[mid] >= tar)
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> arr(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll val;
        cin >> val;
        // ll ans = lower_bound(arr, val, n);
        ll ans = lower_bound(arr.begin(), arr.end(), val) - arr.begin();
        // cout << ans << endl;
        if (ans == n)
        {
            cout << "No " << n << endl;
        }
        else if (arr[ans] == val)
        {
            cout << "Yes " << ans + 1 << endl;
        }
        else if (arr[ans] != val)
        {
            cout << "No " << ans + 1 << endl;
        }
    }

    return 0;
}
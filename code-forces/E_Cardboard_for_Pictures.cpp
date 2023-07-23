#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// bool isPossible(vector<int> &vc, ll w, ll c)
// {
//     ll total = 0;
//     for (int i = 0; i < vc.size(); i++)
//     {
//         ll newLength = (2 * w) + vc[i];
//         total += (newLength * newLength);
//     }
//     if (total > c)
//     {
//         return false;
//     }
//     return true;
// }

bool isPossible(vector<int> &vc, ll w, ll c)
{
    ll total = 0;
    for (int i = 0; i < vc.size(); i++)
    {
        ll newLength = (2 * w) + vc[i];
        total += (newLength * newLength);
        if (total > c)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        ll n, c;
        cin >> n >> c;
        vector<int> vc(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vc[i];
        }

        ll l = 0, r = 1e9;
        ll ans;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (isPossible(vc, mid, c))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
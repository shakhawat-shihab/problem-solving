#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    unordered_map<ll, ll> mp;
    for (ll i = 0; i <= 10000; i++)
    {
        mp[i * i * i] = 1;
    }

    for (int Case = 1; Case <= t; Case++)
    {
        ll n;
        cin >> n;
        int flag = 0;
        for (ll i = 1; i < 10001; i++)
        {
            long long val = i * i * i;
            if (val >= n)
            {
                break;
            }
            if (mp[n - val])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
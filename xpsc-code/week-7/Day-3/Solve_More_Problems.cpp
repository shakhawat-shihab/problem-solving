#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<ll, ll> x, pair<ll, ll> y)
{
    ll xx = x.first + x.second;
    ll yy = y.first + y.second;
    if (xx == yy)
    {
        return x.first < y.first;
    }
    return xx < yy;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n, duration;
        cin >> n >> duration;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<pair<ll, ll>> vp;
        for (int i = 0; i < n; i++)
        {
            vp.push_back({a[i], b[i]});
        }

        sort(vp.begin(), vp.end(), cmp);

        int ans = 0;
        long long mx = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            if (vp[i].first + vp[i].second <= duration)
            {
                ans++;
                mx = max(mx, vp[i].second);
                duration -= (vp[i].first + vp[i].second);
            }
            else
            {
                break;
            }
        }
        int crnt = i;
        while (crnt < n)
        {
            if (duration >= vp[crnt].first)
            {
                // this is our last element
                ans++;
                break;
            }
            else
            {
                // we add the biggest second value element (inside the mx) at the end and takig this into account
                long long remTime = duration - (vp[crnt].first + vp[crnt].second);
                remTime += mx;

                if (remTime >= 0)
                {
                    ans++;
                    break;
                }
            }
            crnt++;
        }

        cout << ans << endl;
    }
    return 0;
}
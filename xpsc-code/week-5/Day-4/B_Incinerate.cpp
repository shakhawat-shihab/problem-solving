#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        vector<ll> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        multiset<ll> mins;
        for (int i = 0; i < n; i++)
        {
            mins.insert(p[i]);
        }

        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> mnpq;
        for (int i = 0; i < n; i++)
        {
            mnpq.push({h[i], i});
        }

        bool ok = false;
        ll totalReduce = 0;
        while (k > 0)
        {
            totalReduce += k;
            while (!mnpq.empty())
            {
                ll currv = mnpq.top().first - totalReduce;
                ll curri = mnpq.top().second;
                if (currv < 1)
                {
                    mnpq.pop();
                    mins.erase(mins.find(p[curri]));
                }
                else
                {
                    break;
                }
            }
            if (mnpq.empty())
            {
                ok = true;
                break;
            }
            ll redK = *mins.begin();
            k -= redK;
        }

        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
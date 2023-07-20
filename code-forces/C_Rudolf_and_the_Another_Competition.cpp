#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<ll, pair<ll, ll>> x, pair<ll, pair<ll, ll>> y)
{
    // if (x.first == y.first)
    // {
    //     return x.second.first < y.second.first;
    // }
    // return x.first > y.first;
    if (x.first == y.first && x.second.first == y.second.first)
        return x.second.second < y.second.second;
    else if (x.first == y.first)
        return x.second.first < y.second.first;
    return x.first > y.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<pair<ll, pair<ll, ll>>> vp;
        for (int i = 0; i < n; i++)
        {
            int time[m];
            for (int j = 0; j < m; j++)
            {
                cin >> time[j];
            }
            sort(time, time + m);
            ll pnlt = 0;
            ll slv = 0;
            ll tmp = 0;
            ll crnt = 0;
            for (int k = 0; k < m; k++)
            {
                if (tmp + time[k] <= h)
                {
                    tmp += time[k];
                }
                else
                {
                    break;
                }
                crnt += time[k];
                // cout << "crnt " << crnt << endl;
                pnlt += crnt;
                // cout << pnlt << endl;
                slv++;
            }
            vp.push_back({slv, {pnlt, i}});
        }

        // for (auto val : vp)
        // {
        //     cout << val.first << " " << val.second.first << " " << val.second.second << endl;
        // }

        sort(vp.begin(), vp.end(), cmp);

        // cout << "AFTER SORT" << endl;
        // for (auto val : vp)
        // {
        //     cout << val.first << " " << val.second.first << " " << val.second.second << endl;
        // }

        for (int i = 0; i < n; i++)
        {
            if (vp[i].second.second == 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
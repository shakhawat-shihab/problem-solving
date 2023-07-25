#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int> x, pair<int, int> y)
{
    return y.first < x.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vp.push_back({x, i + 1});
    }
    sort(vp.begin(), vp.end(), cmp);
    ll ans = 0;
    vector<int> vc;
    for (int i = 0; i < n; i++)
    {
        // cout << vp[i].first << " " << vp[i].second << endl;
        if (i == 0)
            ans += ((i)*vp[i].first) + 1;
        else
            ans += ((i)*vp[i].first) + 1;
        // cout << ans << endl;
        vc.push_back(vp[i].second);
    }
    cout << ans << endl;
    for (auto val : vc)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n, m, k, h;
        cin >> n >> m >> k >> h;

        map<int, int> mp;
        for (int i = 1; i < m; i++)
        {
            mp[i * k] = 1;
        }

        // for (auto val : mp)
        // {
        //     cout << val.first << " " << val.second << endl;
        // }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (mp[abs(h - x)])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
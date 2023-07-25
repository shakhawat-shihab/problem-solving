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
        for (int i = 1; i <= m; i++)
        {
            int pos = i * k + h;
            mp[pos] = 1;
            cout << "vlad " << pos << endl;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            // cout << i << " " << x - h << endl;

            // if (i != n - 1 && x != h && (x - h) % k == 0)
            // {
            //     cnt++;
            // }
            for (int j = 1; j <= m; j++)
            {
                int pos = j * k + x;
                if (mp[pos])
                {
                    cout << "got " << pos << endl;
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
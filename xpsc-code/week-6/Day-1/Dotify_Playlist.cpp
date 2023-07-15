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
        int n, k, ll;
        cin >> n >> k >> ll;

        vector<int> vc;
        while (n--)
        {
            int m, l;
            cin >> m >> l;
            if (ll == l)
            {
                vc.push_back(m);
            }
        }

        sort(vc.rbegin(), vc.rend());
        int sum = 0;
        if (vc.size() >= k)
        {
            for (int i = 0; i < k; i++)
            {
                sum += vc[i];
            }
            cout << sum << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
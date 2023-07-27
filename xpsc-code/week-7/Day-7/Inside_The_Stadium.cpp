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
        int n;
        cin >> n;
        ll sm = 0;
        ll cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            sm += x;
            if (sm == i)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
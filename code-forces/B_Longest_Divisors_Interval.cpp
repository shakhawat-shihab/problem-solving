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
        ll n;
        cin >> n;
        int cnt = 0;
        int mx = 1;
        for (ll i = 1; i < 1000; i++)
        {
            if (n % i == 0)
            {
                cnt++;
            }
            else
            {
                mx = max(mx, cnt);
                cnt = 0;
            }
        }
        mx = max(mx, cnt);
        cout << mx << endl;
    }
    return 0;
}
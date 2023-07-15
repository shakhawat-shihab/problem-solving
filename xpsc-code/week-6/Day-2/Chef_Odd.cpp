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
        ll n, k;
        cin >> n >> k;
        ll cnt = n / 2;
        if (n % 2 == 1)
        {
            cnt++;
        }
        // cout << cnt << endl;

        cnt = cnt - k;
        if (cnt >= 0 && cnt % 2 == 0 && n >= 2 * k)
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
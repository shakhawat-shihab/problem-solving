#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll md = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    for (int Case = 1; Case <= t; Case++)
    {
        int n, k;
        cin >> n >> k;
        ll ans = 1;
        for (int i = 1; i <= k; i++)
        {
            ans = (ans * n) % md;
        }
        cout << ans << endl;
    }
    return 0;
}
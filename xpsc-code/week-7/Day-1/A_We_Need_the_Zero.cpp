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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = -1;
        for (int x = 0; x < 256; x++)
        {
            int b[n];
            int xr = 0;
            for (int i = 0; i < n; i++)
            {
                b[i] = arr[i] ^ x;
                xr ^= b[i];
            }
            if (xr == 0)
            {
                ans = x;
                break;
            }
        }

        if (ans > -1)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
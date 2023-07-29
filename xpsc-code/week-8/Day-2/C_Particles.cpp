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
        ll arr[n + 1];
        ll oddMx = LONG_MIN, evenMx = LONG_MIN, mx = LONG_MIN;
        ll crntOdd = 0, crntEven = 0;
        int pos = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (i % 2)
            {
                // oddMx = max(arr[i], oddMx);
                if (arr[i] > 0)
                {
                    crntOdd += arr[i];
                }
            }
            else
            {
                // evenMx = max(arr[i], evenMx);
                if (arr[i] > 0)
                {
                    crntEven += arr[i];
                }
            }
            if (arr[i] > 0)
            {

                pos = 1;
            }
            mx = max(arr[i], mx);
        }
        if (pos == 0)
            cout << mx << endl;
        else
            cout << max(max(crntOdd, crntEven), mx) << endl;
    }
    return 0;
}
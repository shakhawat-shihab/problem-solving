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

        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int v1 = 0;
            int v2 = 0;
            if (i == 0)
            {
                v1 = abs(arr[i] - arr[i + 1]);
            }
            else if (i == n - 1)
            {
                v2 = abs(arr[i] - arr[i - 1]);
            }
            else
            {
                v1 = abs(arr[i] - arr[i + 1]);
                v2 = abs(arr[i] - arr[i - 1]);
            }
            int res = max(v1, v2);
            mn = min(res, mn);
        }
        cout << mn << endl;
    }
    return 0;
}
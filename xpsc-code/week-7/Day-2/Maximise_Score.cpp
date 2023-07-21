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
            cin >> arr[i];
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int l = 0, r = 0;
            if (i == 0)
            {
                r = abs(arr[i + 1] - arr[i]);
            }
            else if (i == n - 1)
            {
                l = abs(arr[i - 1] - arr[i]);
            }
            else
            {
                l = abs(arr[i - 1] - arr[i]);
                r = abs(arr[i + 1] - arr[i]);
            }
            int mx = max(l, r);
            mn = min(mn, mx);
        }
        cout << mn << endl;
    }
    return 0;
}
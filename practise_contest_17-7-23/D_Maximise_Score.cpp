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
            int r = 0, l = 0;
            if (i == 0)
            {
                r = abs(arr[i] - arr[i + 1]);
            }
            else if (i == n - 1)
            {
                l = abs(arr[i] - arr[i - 1]);
            }
            else
            {
                r = abs(arr[i] - arr[i + 1]);
                l = abs(arr[i] - arr[i - 1]);
            }
            mn = min(max(r, l), mn);
        }
        cout << mn << endl;
    }
    return 0;
}
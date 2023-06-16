#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (arr[i] - mn);
        }
        cout << ans << endl;
    }
    return 0;
}
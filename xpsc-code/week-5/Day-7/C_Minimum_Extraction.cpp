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
        sort(arr, arr + n);

        int ans = arr[0];
        ll ss = 0;
        for (int i = 0; i < n; i++)
        {
            arr[i] -= ss;
            ss += arr[i];
            // cout << arr[i] << ss << endl;
        }
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, arr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int mx = 0;
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] <= k)
            {
                cnt++;
            }
            else
            {
                // cout << "cnt " << cnt << endl;
                mx = max(cnt, mx);
                cnt = 1;
            }
        }
        mx = max(cnt, mx);
        cout << n - mx << endl;
    }
    return 0;
}
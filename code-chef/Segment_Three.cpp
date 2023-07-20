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
        int sum = arr[0] + arr[1] + arr[2];
        int ans = (sum % 3) ? (3 - (sum % 3)) : 0;
        int crnt = (sum % 3) ? (3 - (sum % 3)) : 0;
        int limit = 2;
        int i = 0, j = 3;
        cout << sum << " " << crnt << endl;

        while (j < n)
        {
            sum -= arr[i];
            sum += arr[j];
            int need=
            i++;
            j++;
        }

        cout << ans << endl;
    }
    return 0;
}
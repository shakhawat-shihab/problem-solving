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
        int crnt = arr[n - 1];
        int cnt = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] > crnt)
            {
                cnt++;
            }
            crnt = min(crnt, arr[i]);
        }
        cout << cnt << endl;
    }
    return 0;
}
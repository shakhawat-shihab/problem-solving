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
        int diff = 0;
        cin >> arr[0];
        int mn = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            int diff = arr[i] - arr[i - 1];
            mn = min(mn, diff);
        }
        // cout << "mn " << mn << endl;
        if (mn < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << mn / 2 + 1 << endl;
        }
    }
    return 0;
}
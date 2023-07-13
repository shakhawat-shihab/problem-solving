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
        int prev = -1;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (prev != arr[i])
            {
                mp[arr[i]]++;
            }
            prev = arr[i];

            if (i == 0)
            {
                mp[arr[0]]--;
            }
            if (i == n - 1)
            {
                mp[arr[n - 1]]--;
            }
        }
        if (mp.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int mn = INT_MAX;
        for (auto val : mp)
        {
            // cout << val.first << " " << val.second << endl;
            mn = min(mn, val.second);
        }
        cout << mn + 1 << endl;
    }
    return 0;
}
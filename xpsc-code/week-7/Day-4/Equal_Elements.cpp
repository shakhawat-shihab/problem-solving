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
        int mx = 0;
        unordered_map<int, int> mp;
        int mxVal;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int cnt = 0;
        for (auto val : mp)
        {
            cnt = max(cnt, mp[val.first]);
        }

        cout << n - cnt << endl;
    }
    return 0;
}
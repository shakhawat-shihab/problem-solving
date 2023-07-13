#include <bits/stdc++.h>
using namespace std;
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
        unordered_map<int, int> mp;
        for (long long i = 1; i <= 2 * n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int mx = 0;
        for (auto val : mp)
        {
            mx = max(mx, val.second);
        }
        cout << mx << endl;
    }
    return 0;
}
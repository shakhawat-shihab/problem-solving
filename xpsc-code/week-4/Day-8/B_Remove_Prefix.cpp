#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int s = 1; s <= t; s++)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        int mx = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (mp[x])
            {
                mx = max(mx, mp[x]);
            }
            mp[x] = i;
        }
        cout << mx << endl;
    }
    return 0;
}
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
        int cnt = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (mp[x])
            {
                cnt++;
            }
            mp[x] = 1;
        }
        if (cnt % 2 == 0)
        {
            cout << n - cnt << endl;
        }
        else
        {
            cout << n - cnt - 1 << endl;
        }
    }
    return 0;
}
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
        unordered_map<int, int> mp;
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (mp[x])
            {
                pos = max(mp[x], pos);
            }
            mp[x] = i + 1;
        }
        cout << pos << endl;
    }
    return 0;
}
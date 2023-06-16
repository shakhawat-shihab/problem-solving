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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x] = 1;
        }
        if ((n - mp.size()) % 2 == 1)
        {
            cout << mp.size() - 1 << endl;
        }
        else
        {
            cout << mp.size() << endl;
        }
    }
    return 0;
}
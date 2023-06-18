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
        vector<int> vc(n, 0);
        int flag = 1;

        int prvs = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vc[i] = x;
            if (mp[x] && prvs != x)
            {
                flag = 0;
            }
            mp[x]++;
            prvs = x;
        }

        unordered_map<int, int> quan;
        for (auto val : mp)
        {
            if (quan[val.second])
            {
                flag = 0;
                break;
            }
            quan[val.second]++;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

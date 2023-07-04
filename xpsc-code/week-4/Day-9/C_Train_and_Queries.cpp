#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        map<int, multiset<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]].insert(i + 1);
        }
        while (k--)
        {
            int a, b;
            cin >> a >> b;
            auto vca = mp[a].begin();
            auto vcb = mp[b].rbegin();
            if (mp[a].size() == 0 || mp[b].size() == 0)
            {
                cout << "NO" << endl;
                continue;
            }

            int flag = 0;

            if (*vca < *vcb)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
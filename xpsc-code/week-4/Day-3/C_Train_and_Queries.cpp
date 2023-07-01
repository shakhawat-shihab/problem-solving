#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 1;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, multiset<int>> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;
            // cout << a << " " << b << endl;
            if (mp[a].size() == 0 || mp[b].size() == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                if (*mp[a].begin() < *mp[b].rbegin())
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}
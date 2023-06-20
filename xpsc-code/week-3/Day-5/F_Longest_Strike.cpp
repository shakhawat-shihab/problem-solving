#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        vector<int> filtered;
        for (auto val : mp)
        {
            if (val.second >= k)
            {
                filtered.push_back(val.first);
            }
        }

        if (filtered.size() == 0)
        {
            cout << -1 << endl;
            continue;
        }

        sort(filtered.begin(), filtered.end());

        int mx = 0;
        int l = filtered[0], r = filtered[0];
        int left = filtered[0];

        for (int i = 1; i < filtered.size(); i++)
        {
            if (filtered[i - 1] == filtered[i] - 1)
            {
                if (filtered[i] - left > mx)
                {
                    l = left;
                    r = filtered[i];
                    mx = filtered[i] - left;
                }
            }
            else
            {
                left = filtered[i];
            }
        }
        cout << l << " " << r << endl;
    }

    return 0;
}
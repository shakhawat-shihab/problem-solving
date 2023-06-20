#include <bits/stdc++.h>
using namespace std;

int getUpperBound(vector<int> &values, int tar)
{
    int l = 0, h = values.size() - 1;
    int ans = values.size();
    while (l < h)
    {
        int mid = l + (h - l) / 2;
        if (tar < values[mid])
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> vc;
        vector<int> values;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (i > x)
            {
                vc.push_back({i, x});
                values.push_back(x);
            }
        }

        // for (auto val : vc)
        // {
        //     cout << val.first << " " << val.second << "\n";
        // }

        sort(values.begin(), values.end());

        long long cnt = 0;
        for (auto it : vc)
        {
            int found = 0;
            // int index = getUpperBound(values, it.first);
            int index = upper_bound(values.begin(), values.end(), it.first) - values.begin();
            // cout << it.first << " Index " << index << endl;
            // cout << "--> " << values[index] << endl;
            if (index < values.size())
            {
                cnt += values.size() - index;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
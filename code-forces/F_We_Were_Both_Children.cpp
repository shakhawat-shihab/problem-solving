#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        int arr[n];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        unordered_map<int, int> mrk;
        int mx = 0;
        for (auto val : mp)
        {
            int p = val.first;
            // cout << p << "- " << val.second << endl;
            while (1)
            {
                if (p > n)
                {
                    break;
                }
                mrk[p] += val.second;
                mx = max(mx, mrk[p]);
                p += val.first;
            }
        }
        // for (auto val : mrk)
        // {
        //     cout << val.first << " " << val.second << endl;
        // }
        cout << mx << endl;
    }
    return 0;
}
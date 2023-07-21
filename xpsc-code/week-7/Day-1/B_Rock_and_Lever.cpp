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

        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int bit = log2(x) + 1;
            mp[bit].push_back(x);
        }

        // for (auto val : mp)
        // {
        //     cout << "Bit " << val.first << ": ";
        //     for (auto num : val.second)
        //     {
        //         cout << num << " ";
        //     }
        //     cout << endl;
        // }

        ll cnt = 0;
        for (auto val : mp)
        {
            ll len = val.second.size();
            cnt += (len * (len - 1)) / 2;
        }
        cout << cnt << endl;
    }
    return 0;
}
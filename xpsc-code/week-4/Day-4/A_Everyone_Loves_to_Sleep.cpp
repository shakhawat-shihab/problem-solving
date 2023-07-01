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
        int H, M;
        cin >> H >> M;
        // vector<vector<int>>hm;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h >> m;
            int val = h * 60 + m;
            mp[val] = 1;
        }

        // for (auto val : mp)
        // {
        //     cout << val.first << " ";
        // }

        int crnt = H * 60 + M;
        int mnt = 0;
        while (1)
        {
            if (mp[crnt])
            {
                break;
            }
            mnt++;
            crnt++;
            crnt = crnt % 1440;
        }

        cout << mnt / 60 << " " << mnt % 60 << endl;
    }
    return 0;
}
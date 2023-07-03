#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n, H, M;
        cin >> n >> H >> M;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h >> m;
            int time = h * 60 + m;
            mp[time] = 1;
        }

        int crnt = H * 60 + M;
        int sleep = 0;
        while (1)
        {
            if (mp[crnt])
            {
                break;
            }
            crnt++;
            crnt %= 1440;
            sleep++;
        }
        cout << sleep / 60 << " " << sleep % 60 << endl;
    }
    return 0;
}
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
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            mx = max(x, mx);
        }

        // int ans = 0;
        int flag = 1;
        for (int i = mx; i >= 0; i--)
        {
            int cnt = mp[i];
            if (mp[i])
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (mp[j] < cnt)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag == 0)
            {
                break;
            }
        }

               if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int flag = 1;
        for (auto val : mp)
        {
            // cout << val.first << "=" << val.second << endl;
            if (val.second == 1)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            for (int i = 1; i <= n; i++)
            {
                int cnt = mp[arr[i]];
                // cout << i << "== " << cnt << endl;
                if (cnt % 2 == 0)
                {
                    for (int j = i, crnt = 0; crnt < cnt; j += 2, crnt += 2)
                    {
                        cout << j + 1 << " " << j << " ";
                    }
                    i += cnt - 1;
                }
                else
                {
                    for (int j = i, crnt = 0; crnt < cnt - 3; j += 2, crnt += 2)
                    {
                        cout << j + 1 << " " << j << " ";
                    }
                    cout << i + cnt - 1 << " " << i + cnt - 3 << " " << i + cnt - 2 << " ";
                    i += cnt - 1;
                }
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
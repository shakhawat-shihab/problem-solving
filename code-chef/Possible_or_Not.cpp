#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long tar;
        cin >> tar;
        map<long long, long long> mp;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mx = max(mx, x);
            mp[x] = 1;
        }

        int bitCnt;
        if ((tar & (tar - 1)) == 0)
        {
            bitCnt = log2(tar) + 1;
        }
        else
        {
            bitCnt = ceil(log2(tar));
        }

        long long val = pow(2, bitCnt) - 1;
        // cout << bitCnt << " " << val << endl;

        if (mp[tar])
        {
            cout << "YES" << endl;
            continue;
        }

        tar = (tar | (1 << (bitCnt)));
        // cout << tar << endl;
        int flag = 0;
        if (mp[val])
        {
            int i = bitCnt + 1;
            while (tar <= mx)
            {
                // cout << tar << endl;
                if (mp[tar])
                {
                    flag = 1;
                    break;
                }
                tar = (tar | (1 << i));
                i++;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
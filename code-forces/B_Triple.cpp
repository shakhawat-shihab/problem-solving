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
        // int arr[n];
        int flag = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (flag == 0)
            {
                mp[x]++;
                if (mp[x] == 3)
                {
                    flag = x;
                }
            }
        }

        if (flag)
        {
            cout << flag << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
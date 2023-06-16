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
        unordered_map<string, int> mp;
        int flag = 0;

        for (int i = 0; i < 2; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'G')
                {
                    s[j] = 'B';
                }
            }
            if (mp[s] == 1)
            {
                flag = 1;
                break;
            }
            mp[s]++;
        }

        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
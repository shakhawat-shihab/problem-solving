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
        string s[n];

        for (int i = 0; i < n; i++)
        {
            // string s;
            cin >> s[i];
            mp[s[i]] = 1;
        }

        string ans = "";
        for (int i = 0; i < n; i++)
        {
            int flag = 0;
            for (int j = 1; j < s[i].length(); j++)
            {
                if (mp[s[i].substr(0, j)] && mp[s[i].substr(j, s[i].length())])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                ans += "1";
            else
                ans += "0";
        }

        cout << ans << endl;
    }
    return 0;
}
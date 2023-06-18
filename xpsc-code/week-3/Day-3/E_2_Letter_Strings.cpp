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
        string s[n];

        unordered_map<char, int> first, last;
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            first[s[i][0]]++;
            last[s[i][1]]++;
            mp[s[i]]++;
        }

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            int cnt = max(0, first[s[i][0]] - mp[s[i]]);
            ans += cnt;

            cnt = max(0, last[s[i][1]] - mp[s[i]]);
            ans += cnt;

            if (first[s[i][0]] > 0)
            {
                first[s[i][0]]--;
            }
            if (last[s[i][1]] > 0)
            {
                last[s[i][1]]--;
            }
            if (mp[s[i]] > 0)
            {
                mp[s[i]]--;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for (auto ch : s)
        {
            mp[ch]++;
        }

        int cnt = 0;
        for (char c = 'a'; c <= 'z'; c++)
        {
            cnt += min(mp[c], mp[toupper(c)]);
            // cout << mp[c] << " " << mp[toupper(c)] << endl;

            int psblChng = abs(mp[c] - mp[toupper(c)]) / 2;

            if (psblChng <= k && k)
            {
                cnt += psblChng;
                k = k - psblChng;
            }
            else
            {
                cnt += k;
                k = 0;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
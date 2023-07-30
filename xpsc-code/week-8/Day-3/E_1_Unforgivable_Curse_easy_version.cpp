#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;

        vector<int> mp1(26, 0), mp2(26, 0);
        for (int i = 0; i < n; i++)
        {
            mp1[s[i] - 'a']++;
            mp2[t[i] - 'a']++;
        }

        int f = 1;
        for (int i = 0; i < 26; i++)
        {
            if (mp1[i] != mp2[i])
            {
                f = 0;
            }
        }
        if (f == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if ((i + k) >= n && (i - k) < 0)
            {
                if (s[i] != t[i])
                {
                    f = 0;
                }
            }
        }

        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
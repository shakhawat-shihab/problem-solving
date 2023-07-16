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
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }

        int odd = 0;
        for (auto val : mp)
        {
            if (val.second % 2)
            {
                odd++;
            }
        }

        if (n % 2 == 1 && n > 1 && mp.size() == 1)
        {
            cout << 2 << endl;
        }
        else if ((n % 2 == 1 && odd > 1) || (n % 2 == 0 && odd > 0))
        {
            cout << 0 << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}
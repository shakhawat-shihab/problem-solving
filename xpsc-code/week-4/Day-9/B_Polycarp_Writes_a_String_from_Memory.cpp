#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        int cnt = 0;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]] = 1;
            if (mp.size() > 3)
            {
                mp.clear();
                i--;
                cnt++;
            }
        }
        if (mp.size())
        {
            cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}
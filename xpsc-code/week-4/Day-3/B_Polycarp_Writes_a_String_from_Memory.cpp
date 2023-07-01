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
        // int i = 0;
        int cnt = 0;

        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            if (mp.size() < 4)
            {
                mp[s[i]] = 1;
            }
            if (mp.size() == 4)
            {
                // cout << s[i] << " " << i << ",,  ";
                mp.clear();
                cnt++;
                i--;
            }
        }
        if (mp.size())
            cnt++;
        cout << cnt << endl;
    }
    return 0;
}
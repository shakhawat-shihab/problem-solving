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
        string s;
        cin >> s;
        string ans = "meow";

        unordered_map<char, int> mp;
        string tmp = "";
        char prvs = '$';
        for (auto ch : s)
        {
            if (mp[tolower(ch)] == 0)
            {
                tmp += tolower(ch);
            }
            if (tolower(ch) != prvs && prvs != '$')
            {
                mp[tolower(prvs)] = 0;
            }
            mp[tolower(ch)] = 1;
            prvs = tolower(ch);
        }

        // cout << "tmp " << tmp << endl;

        if (tmp != ans)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
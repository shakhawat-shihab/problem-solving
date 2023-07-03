#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        // int n;
        // cin >> n;
        string s;
        cin >> s;
        char strt = s[0];
        char end = s[s.length() - 1];

        unordered_map<char, vector<int>> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]].push_back(i + 1);
        }

        int jmp = 0;
        vector<int> path;
        if (end >= strt)
        {
            int cost = end - strt;
            while (1)
            {

                // jmp+=mp[strt];
                if (mp[strt].size())
                    for (auto val : mp[strt])
                    {
                        path.push_back(val);
                        jmp++;
                    }
                if (strt == end)
                {
                    break;
                }
                strt++;
            }
            cout << cost << " " << jmp << endl;
            for (auto val : path)
                cout << val << " ";
            cout << endl;
        }
        else
        {
            int cost = strt - end;
            while (1)
            {
                // jmp+=mp[strt];
                if (mp[strt].size())
                    for (auto val : mp[strt])
                    {
                        path.push_back(val);
                        jmp++;
                    }
                if (strt == end)
                {
                    break;
                }
                strt--;
            }
            cout << cost << " " << jmp << endl;
            for (auto val : path)
                cout << val << " ";
            cout << endl;
        }
    }
    return 0;
}
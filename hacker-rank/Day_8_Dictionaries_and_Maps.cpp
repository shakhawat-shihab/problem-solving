#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int n = t;
    unordered_map<string, string> mp;
    while (t--)
    {
        string s;
        cin >> s;
        string n;
        cin >> n;
        mp[s] = n;
    }

    string s;
    while (cin >> s)
    {
        if (mp.find(s) != mp.end())
        {
            cout << s << "=" << mp[s] << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
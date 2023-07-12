#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int sLen = s.length();
    int tLen = t.length();
    while (sLen && tLen)
    {
        if (s[sLen - 1] == t[tLen - 1])
        {
            sLen--;
            tLen--;
        }
        else
        {
            break;
        }
    }

    cout << sLen + tLen << endl;
    return 0;
}
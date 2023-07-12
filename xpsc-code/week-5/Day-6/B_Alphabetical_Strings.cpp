#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        string s;
        cin >> s;
        int pos = s.find("a");
        if (pos == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        int l = pos - 1;
        int r = pos + 1;
        char crnt = 'b';
        int flag = 1;
        while (l >= 0 || r < s.length())
        {
            if (l >= 0 && s[l] == crnt)
            {
                l--;
            }
            else if (r < s.length() && s[r] == crnt)
            {
                r++;
            }
            else
            {
                flag = 0;
                break;
            }
            crnt++;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
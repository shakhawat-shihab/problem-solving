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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n % 3 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int flag = 0;
            for (char c = 'a'; c <= 'z'; c++)
            {
                int l = INT_MAX, r = INT_MIN;
                for (int i = 0; i < s.length(); i++)
                {
                    if (s[i] == c)
                    {
                        if (i % 3 == 0)
                            l = min(l, i);
                        if ((n - 1 - i) % 3 == 0)
                            r = max(r, i);
                    }
                }
                if (l < r)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
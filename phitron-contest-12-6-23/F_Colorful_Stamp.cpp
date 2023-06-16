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
        int flag = 1;
        int cntR = 0, cntB = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != 'W')
            {
                if (s[i] == 'R')
                {
                    cntR++;
                }
                else
                {
                    cntB++;
                }
            }

            else
            {
                if ((cntR || cntB) && ((!cntR && cntB) || (cntR && !cntB)))
                {
                    flag = 0;
                }
                cntR = 0;
                cntB = 0;
            }
        }

        if ((cntR || cntB) && ((!cntR && cntB) || (cntR && !cntB)))
        {
            flag = 0;
        }

        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
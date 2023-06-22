#include <bits/stdc++.h>
using namespace std;

int getVal(string s)
{
    int cnt = 0;
    int val = 0;
    for (char ch : s)
    {
        if (ch == 'X')
        {
            cnt++;
        }
        else if (ch == 'S')
        {
            cnt++;
            val -= cnt;
            break;
        }
        else if (ch == 'L')
        {
            cnt++;
            val += cnt;
            break;
        }
        else
        {
            val = 0;
            break;
        }
    }
    // cout << "val " << val << endl;
    return val;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int val1 = getVal(s1);
        int val2 = getVal(s2);

        if (val1 > val2)
        {
            cout << ">" << endl;
        }
        else if (val1 < val2)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    return 0;
}
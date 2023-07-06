#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag1 = 0;
        int flag2 = 0;
        int mid = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ':')
            {
                flag1 = 1;
            }
            else if (s[i] == '(')
            {
                mid = 0;
                flag1 = 0;
            }
            else if (s[i] == ')' && flag1 == 1)
            {
                mid = 1;
            }
            if (s[i] == ':' && mid == 1)
            {
                cnt++;
                mid = 0;
                flag1 = 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
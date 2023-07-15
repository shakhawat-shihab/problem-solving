#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        char srvr = 'A';
        int a = 0, b = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
            {
                if (srvr == 'A')
                {
                    a++;
                }
                else
                {
                    srvr = 'A';
                }
            }
            else
            {
                if (srvr == 'B')
                {
                    b++;
                }
                else
                {
                    srvr = 'B';
                }
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
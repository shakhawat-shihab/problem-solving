#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            s[i] = toupper(s[i]);
        }
        if (s == "YES")
            cout << s << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
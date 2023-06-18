#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        string o = "";
        string e = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (i & 1)
            {
                o += s[i];
            }
            else
            {
                e += s[i];
            }
        }
        cout << e << " " << o << endl;
    }
    return 0;
}
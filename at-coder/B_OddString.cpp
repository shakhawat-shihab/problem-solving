#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if ((i & 1) == 0)
        {
            ans += s[i];
        }
    }
    // reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}
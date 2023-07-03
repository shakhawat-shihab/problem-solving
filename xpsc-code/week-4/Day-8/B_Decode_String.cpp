#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int x = 1; x <= t; x++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                int v1 = s[i - 1] - '0';
                int v2 = s[i - 2] - '0';
                int pos = v2 * 10 + v1;
                pos--;
                // cout << v1 << " " << v2 << endl;
                char c = 'a' + pos;
                ans += c;
                i -= 2;
            }
            else
            {
                int pos = s[i] - '0';
                pos--;
                char c = 'a' + pos;
                ans += c;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}
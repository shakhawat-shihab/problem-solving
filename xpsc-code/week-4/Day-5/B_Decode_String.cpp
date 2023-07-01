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
        int flag = 0;
        string ans = "";
        for (int i = s.length() - 1; i >= 0; i--)
        {

            if (s[i] == '0')
            {
                int c1 = s[i - 1] - '0';
                int c2 = s[i - 2] - '0';
                int val = c1 + c2 * 10;
                val--;
                char ch = val + 'a';
                ans += ch;
                i -= 2;
                // cout << "ch , " << ch << endl;
            }
            else
            {
                int val = s[i] - '0';
                val--;
                char ch = val + 'a';
                ans += ch;
                // cout << "ch " << ch << endl;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}
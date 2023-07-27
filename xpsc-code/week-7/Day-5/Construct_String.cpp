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
        string ans = "";
        char temp = s[0];
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (temp != s[i])
            {
                if (cnt % 2)
                {
                    ans += temp;
                }
                else
                {

                    ans += temp;
                    ans += temp;
                }
                temp = s[i];
                cnt = 1;
            }
            else
            {
                cnt++;
            }
        }
        if (cnt % 2)
        {
            ans += temp;
        }
        else
        {

            ans += temp;
            ans += temp;
        }
        cout << ans << endl;
    }
    return 0;
}
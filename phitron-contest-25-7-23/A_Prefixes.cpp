#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin >> t;
    // for (int Case = 1; Case <= t; Case++)
    // {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
            if (s[i] == 'a')
                s[i + 1] = 'b';
            else
                s[i + 1] = 'a';
        }
    }
    cout << cnt << endl;
    cout << s << endl;
    // }
    return 0;
}
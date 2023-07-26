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

        int mx = 0;
        int xi = 0;
        int cnt = 0;

        for (int i = 0; i < s.length() - 1; i++)
        {
            int si = s[i] - '0';
            xi = (si ^ xi);
            if (xi % 2)
            {
                cnt++;
            }
        }
        cout << max(n - cnt, cnt) << endl;
    }
    return 0;
}
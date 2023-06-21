#include <bits/stdc++.h>
using namespace std;
int dp[300];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> vc(51, 0);
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mx = max(mx, x);
            vc[x] = 1;
        }

        int i = 1;
        while (s > 0 || i <= mx)
        {
            if (vc[i] != 1)
            {
                s -= i;
            }
            i++;
        }
        if (s == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
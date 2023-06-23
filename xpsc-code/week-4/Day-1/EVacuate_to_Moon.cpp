#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, h;
        cin >> n >> m >> h;

        long long car[n];
        for (int i = 0; i < n; i++)
        {
            cin >> car[i];
        }
        sort(car, car + n);

        long long outlet[m];
        for (int i = 0; i < m; i++)
        {
            cin >> outlet[i];
        }
        sort(outlet, outlet + m);

        long long ans = 0;
        int i = n - 1, j = m - 1;
        while (i >= 0 && j >= 0)
        {
            long long chrg = outlet[j] * h;
            // cout << chrg << endl;
            if (chrg >= car[i])
            {
                ans += car[i];
            }
            else
            {
                ans += chrg;
            }
            i--;
            j--;
        }

        cout << ans << endl;
    }
    return 0;
}
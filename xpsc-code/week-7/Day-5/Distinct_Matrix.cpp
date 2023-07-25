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
        if (n == 2)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (i == j)
                        cout << 1;
                    else
                        cout << 0;
                }
                cout << endl;
            }
            for (int i = 1; i <= n; i++)
            {
                cout << 1;
            }
            cout << endl;
        }
    }
    return 0;
}
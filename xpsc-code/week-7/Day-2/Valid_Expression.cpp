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
        int n, x;
        cin >> n >> x;
        if (x > 0)
        {
            if (n + 1 == x)
            {
                for (int i = 1; i < x; i++)
                {
                    cout << "+";
                }
                cout << endl;
            }
            else if (n + 1 > x)
            {
                for (int i = 1; i < x; i++)
                {
                    cout << "+";
                }
                for (int i = x; i <= n; i++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (x < 0)
        {
            // cout << n << " " << x << endl;
            if (n < abs(x))
            {
                cout << -1 << endl;
            }
            else if (n == abs(x))
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = 1; i <= abs(x) + 1; i++)
                {
                    cout << "-";
                }
                for (int i = abs(x) + 2; i <= n; i++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                cout << "*";
            }
            cout << "-" << endl;
        }
    }
    return 0;
}
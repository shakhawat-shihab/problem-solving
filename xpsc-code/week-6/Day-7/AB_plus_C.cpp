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
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else if (n <= 1000000)
        {

            cout << 1 << " " << 1 << " " << n - 1 << endl;
        }
        else
        {
            ll v = 1000000;
            if (n % v == 0)
            {
                cout << v << " " << (n / v) - 1 << " " << v << endl;
            }
            else
            {
                cout << v << " " << n / v << " " << n % v << endl;
            }
        }
    }
    return 0;
}
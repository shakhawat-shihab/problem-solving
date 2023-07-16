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
        if (n & 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int flag = 0;
            while (n > 1)
            {
                if (n % 2 == 1)
                {
                    flag = 1;
                    break;
                }
                n = n / 2;
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
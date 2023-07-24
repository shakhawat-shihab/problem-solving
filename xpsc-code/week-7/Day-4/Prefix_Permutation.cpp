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
        if (n % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " " << i - 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
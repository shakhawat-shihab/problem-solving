#include <bits/stdc++.h>
using namespace std;
const int md = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        long long ans = (2 << (n - 2));
        cout << ans % md << endl;
    }
    return 0;
}
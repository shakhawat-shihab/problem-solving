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
        int dv = n / 10;
        if (n - (dv * 10) < 5)
        {
            n = dv * 10;
        }
        else
        {
            n = (dv + 1) * 10;
        }
        cout << 100 - n << endl;
    }
    return 0;
}
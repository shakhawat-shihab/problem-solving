#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n, m;
        cin >> n >> m;
        int ms = 0;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            ms += (n - x);
        }
        // cout << ms << endl;
        if (ms >= n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n - ms << endl;
        }
    }
    return 0;
}
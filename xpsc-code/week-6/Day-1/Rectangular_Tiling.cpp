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
        int l, w;
        cin >> l >> w;
        // odd even
        if (abs(w - l) % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            // both even
            if (w % 2 == 0 && l % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
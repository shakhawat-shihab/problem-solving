#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        int a, b;
        cin >> a >> b;
        if (a == b)
            cout << 0 << '\n';
        else if (abs(a - b) >= x)
            cout << 1 << '\n';
        else if (a - l >= x && b - l >= x)
            cout << 2 << '\n';
        else if (r - a >= x && r - b >= x)
            cout << 2 << '\n';
        else if (a - l >= x && r - b >= x)
            cout << 3 << '\n';
        else if (b - l >= x && r - a >= x)
            cout << 3 << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}
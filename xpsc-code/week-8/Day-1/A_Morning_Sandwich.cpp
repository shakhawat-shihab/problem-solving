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
        int a, b, c;
        cin >> a >> b >> c;
        if (a > (b + c))
        {
            cout << (b + c) * 2 + 1 << endl;
        }
        else
        {
            cout << (a - 1) * 2 + 1 << endl;
        }
    }
    return 0;
}
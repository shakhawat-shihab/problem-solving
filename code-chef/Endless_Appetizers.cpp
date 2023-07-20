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
        int x, y, r;
        cin >> x >> y >> r;
        int cnt = r / 30;
        cnt += x;
        int plt = (cnt / y);
        if (cnt % y)
            plt++;
        cout << plt << endl;
    }
    return 0;
}
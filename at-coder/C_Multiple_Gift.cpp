#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x, y;
    cin >> x >> y;
    int cnt = 0;
    for (ll i = x; i <= y; i *= 2)
    {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
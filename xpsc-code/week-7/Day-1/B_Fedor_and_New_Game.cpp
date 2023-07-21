#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    int army[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        cin >> army[i];
    }

    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        if (__builtin_popcount(army[i] ^ army[m]) <= k)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    // cout << 7 << " ==> " << __builtin_popcount(7) << endl;
    // cout << 14 << " ==> " << __builtin_popcount(14) << endl;
    // cout << 15 << " ==> " << __builtin_popcount(15) << endl;
    // cout << 16 << " ==> " << __builtin_popcount(16) << endl;

    return 0;
}
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

        if (n <= 2)
        {
            cout << 0 << endl;
            continue;
        }
        // if (n == 3)
        // {
        //     cout << 2 << endl;
        //     continue;
        // }

        int cnt = 0;
        if (n % 2 == 0)
        {
            int mid = n / 2;
            cnt += 3 * (mid - 2);
            cnt += 3;
        }
        else
        {
            int mid = n / 2;
            cnt += 3 * (mid - 1);
            cnt += 2;
        }

        cout << cnt << endl;
    }
    return 0;
}
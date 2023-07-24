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
        int n, k;
        cin >> n >> k;
        if (k > 30)
        {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        for (int i = n; i >= 0; i--)
        {
            int len = 2;
            int prev = n;
            int crnt = i;
            int f = 1;
            while (len < k)
            {
                // cout << prev << " " << crnt << endl;
                int next = prev - crnt;
                if (next > crnt)
                {
                    f = 0;
                    break;
                }
                prev = crnt;
                crnt = next;
                len++;
            }
            if (f == 1)
            {
                // cout << "increase" << endl;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
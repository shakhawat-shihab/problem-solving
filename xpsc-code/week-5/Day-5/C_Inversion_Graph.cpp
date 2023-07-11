#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n;
        cin >> n;
        int ar[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
        }

        int ans = 1;
        int val = ar[1];
        int cnt = 1;
        for (int i = 2; i <= n; i++)
        {
            if (ar[i] > val)
            {
                if (cnt == val)
                {
                    // cout<<i<<" "<<val<<" "<<cnt<<" "<<ans<<endl;
                    ans++;
                }
                val = ar[i];
            }

            cnt++;
        }
        cout << ans << endl;
    }
    return 0;
}
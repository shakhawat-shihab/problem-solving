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
        int sum = 0;
        string ans = "";
        for (int i = 9; i >= 1; i--)
        {
            if (sum + i <= n)
            {
                sum += i;
                ans += to_string(i);
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int neg = 0, pos = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < 0)
            {
                neg++;
            }
            else
            {
                pos++;
            }
        }
        int ans = 0;
        if (pos < neg)
        {
            int avg = (neg + pos) / 2;
            ans = neg - avg;
            neg = neg - ans;
        }
        if (neg % 2 == 1)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
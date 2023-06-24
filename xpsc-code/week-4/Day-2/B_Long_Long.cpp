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
        int x;
        int neg = 0;
        int sm = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x <= 0)
            {
                if (x < 0)
                {
                    neg++;
                }
            }
            else
            {
                if (neg)
                {
                    cnt++;
                    neg = 0;
                }
            }
            sm += abs(x);
        }
        // cout << "de " << neg << endl;
        if (neg)
        {
            cnt++;
        }
        cout << sm << " " << cnt << endl;
    }
    return 0;
}
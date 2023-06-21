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
        long long sum = 0;
        long long cnt = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += abs(x);
            if (x > 0 && flag == 1)
            {
                // cout << x << endl;
                cnt++;
                flag = 0;
            }
            else if (x < 0)
            {
                flag = 1;
            }
        }
        if (x < 0 || flag == 1)
        {
            cnt++;
        }
        cout << sum << " " << cnt << endl;
    }
    return 0;
}
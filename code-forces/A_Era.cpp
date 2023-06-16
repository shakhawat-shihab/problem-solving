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
        // int arr[n + 1];
        long long prvs = 1;
        long long res = 0;
        for (int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            if (x > prvs)
            {
                long long ans = x - prvs;
                prvs += ans;
                res += ans;
            }
            prvs++;
        }
        cout << res << endl;
    }
    return 0;
}
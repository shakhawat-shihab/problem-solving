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
        long long arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        long long cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            long long val = arr[i];
            long long j = val - i;
            while (j <= n)
            {
                if (j > 0)
                    if (arr[i] * arr[j] == i + j && i < j)
                    {
                        cnt++;
                    }
                j = j + val;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
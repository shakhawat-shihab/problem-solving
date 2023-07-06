#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        long long n, q;
        cin >> n >> q;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        while (q--)
        {
            long long k;
            cin >> k;
            // cout << "q " << k << endl;
            long long crnt = n - 1;
            for (int i = 0; i < n; i++)
            {
                if (k <= crnt)
                {
                    cout << arr[i] << endl;
                    break;
                }
                crnt += (n - 1);
            }
        }
    }
    return 0;
}
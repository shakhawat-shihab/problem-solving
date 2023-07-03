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
        long long arr[n + 2];
        n = n + 2;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr, arr + n);

        long long val1 = arr[n - 1];
        long long val2 = arr[n - 2];

        // cout << sum << ", " << val1 << ", " << val2 << endl;

        int find = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (sum - arr[i] - val1 == val1)
            {
                find = i + 1;
                break;
            }
        }

        if (find)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (i != find - 1)
                {
                    cout << arr[i] << " ";
                }
            }
            cout << endl;
            continue;
        }
        else
        {
            sum = sum - arr[n - 1] - arr[n - 2];
            if (sum == val2)
            {
                for (int i = 0; i < n - 2; i++)
                {

                    cout << arr[i] << " ";
                }
                cout << endl;
                continue;
            }
        }

        cout << -1 << endl;
    }
    return 0;
}
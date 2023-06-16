#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long sum[n];
    long long sm = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sm += arr[i];
        sum[i] = sm;
    }
    sort(arr, arr + n);
    sm = 0;
    long long sortedSum[n];
    for (int i = 0; i < n; i++)
    {
        sm += arr[i];
        sortedSum[i] = sm;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        int l, r;
        cin >> l >> r;
        if (t == 1)
        {
            if (l - 1 == 0)
            {
                cout << sum[r - 1] << endl;
            }
            else
            {
                cout << sum[r - 1] - sum[l - 2] << endl;
            }
        }
        else
        {
            if (l - 1 == 0)
            {
                cout << sortedSum[r - 1] << endl;
            }
            else
            {
                cout << sortedSum[r - 1] - sortedSum[l - 2] << endl;
            }
        }
    }

    return 0;
}
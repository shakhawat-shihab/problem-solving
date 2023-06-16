#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum[n];
    int sm = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sm += arr[i];
        sum[i] = sm;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 0)
        {
            cout << sum[r] << endl;
        }
        else
        {
            cout << sum[r] - sum[l - 1] << endl;
        }
    }
    return 0;
}
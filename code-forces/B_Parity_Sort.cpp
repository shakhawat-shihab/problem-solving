#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n;
        cin >> n;
        int arr[n], brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            brr[i] = arr[i];
        }

        sort(arr, arr + n);

        int f = 1;
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] & 1) != (brr[i] & 1))
            {
                f = 0;
                break;
            }
        }

        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
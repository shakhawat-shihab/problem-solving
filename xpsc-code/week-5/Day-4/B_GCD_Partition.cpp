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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long pref[n], suf[n];
        pref[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + arr[i];
        }

        suf[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suf[i] = suf[i + 1] + arr[i];
        }

        long long mx = 0;
        for (int i = 0; i < n - 1; i++)
        {
            long long val1 = pref[i];
            long long val2 = suf[i + 1];
            mx = max(mx, __gcd(val1, val2));
                }
        cout << mx << endl;
    }
    return 0;
}
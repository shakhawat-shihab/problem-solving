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
        long long arr[n], vc[n];

        map<long long, long long> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            int digits = log2(arr[i]);
            digits++;
            vc[i] = digits;
            mp[digits]++;
        }

        sort(vc, vc + n);
        int mstDigit = vc[n - 1];
        cout << (mp[mstDigit] + 1) / 2 << endl;
    }
    return 0;
}
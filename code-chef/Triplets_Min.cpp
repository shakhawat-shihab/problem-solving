#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
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

        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;

        long long seqLen = n - 2, sum = 0;
        map<long long, long long> mp;
        long long indx = 0;
        for (long long i = seqLen; i > 0; i--)
        {
            long long f = (i * (i + 1)) / 2;
            sum += f;
            mp[sum] = indx;
            indx++;
        }

        while (q--)
        {
            long long k;
            cin >> k;
            // cout << "q " << k << endl;
            auto lb = mp.lower_bound(k);
            cout << arr[lb->second] << endl;
        }
    }
    return 0;
}
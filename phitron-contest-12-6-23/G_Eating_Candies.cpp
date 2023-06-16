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
        long long arr[n];
        map<long long, long long> al;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            al[sum] = i + 1;
        }

        long long sm = 0;
        long long mx = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sm += arr[i];
            if ((al[sm] < i + 1) && al[sm])
            {
                mx = max((al[sm]) + (n - i), mx);
            }
        }
        cout << mx << endl;
    }
    return 0;
}
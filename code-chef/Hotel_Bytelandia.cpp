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
        int arr[n], brr[n];
        vector<int> in(1001, 0), out(1001, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            in[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            out[brr[i]]++;
        }

        // for (int i = 1; i <= 10; i++)
        // {
        //     cout << in[1] << endl;
        // }

        int mx = INT_MIN;
        int sm = 0;
        for (int i = 1; i <= 1000; i++)
        {
            sm += in[i];
            sm -= out[i];
            mx = max(sm, mx);
        }
        cout << mx << endl;
    }
    return 0;
}
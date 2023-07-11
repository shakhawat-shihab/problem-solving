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
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int diff = arr[n - 2] - arr[n - 1];
        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << 0 << endl;
        }
        else if (arr[n - 1] < arr[n - 2] || (diff > arr[n - 2]) || (diff > arr[n - 1]))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n - 2 << endl;
            int val = n - 2;
            int i = 0;
            while (i < n - 2)
            {
                cout << i + 1 << " " << n - 1 << " " << n << endl;
                i++;
            }
        }
    }
    return 0;
}
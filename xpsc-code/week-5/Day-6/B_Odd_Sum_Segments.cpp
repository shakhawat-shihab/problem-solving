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
        int n, k;
        cin >> n >> k;
        int arr[n];
        vector<int> odd;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 1)
            {
                odd.push_back(i);
            }
        }

        int val = odd.size() - k + 1;
        if (odd.size() < k || val % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; i++)
            {
                cout << odd[i] + 1 << " ";
            }
            cout << n << "\n";
        }
    }
    return 0;
}
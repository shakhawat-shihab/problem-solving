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
        int arr[n];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        sort(arr, arr + n);
        int last1 = arr[n - 1];
        int last2 = arr[n - 2];
        int occ = 0;
        if (last1 == last2)
        {
            occ = mp[last1];
        }
        else if (mp[last2] > 1)
        {
            occ = mp[last1] + mp[last2];
            if (n - occ > 0)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        else
        {
            occ = mp[last1] + mp[last2];
        }

        if (n - occ + 1 >= occ)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
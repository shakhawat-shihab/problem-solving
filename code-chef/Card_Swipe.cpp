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
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (mp[arr[i]])
            {
                mp.erase(arr[i]);
            }
            else
            {
                mp[arr[i]] = 1;
            }
            int sz = mp.size();
            cnt = max(cnt, sz);
        }
        cout << cnt << endl;
    }
    return 0;
}
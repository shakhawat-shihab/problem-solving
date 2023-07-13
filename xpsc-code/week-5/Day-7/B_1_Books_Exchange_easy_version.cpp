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
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            int nxt = arr[i];
            int cnt = 1;
            while (nxt != i)
            {
                nxt = arr[nxt];
                cnt++;
            }
            ans.push_back(cnt);
        }
        for (auto val : ans)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}
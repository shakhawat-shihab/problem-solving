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

        vector<int> vis(n + 1, 0);
        vector<vector<int>> gp;
        int *ans[n + 1];
        // int helper[n + 1] = {};
        for (int i = 1; i <= n; i++)
        {
            int val = 0;
            // helper[i]=0;
            vector<int> vc;
            int nxt = arr[i];
            if (vis[i] == 0)
            {
                vis[i] = 1;
                vc.push_back(i);
                ans[i] = &val;
                // ans[i] = &helper[i];
            }
            while (i != nxt && vis[nxt] == 0)
            {
                vis[nxt] = 1;
                vc.push_back(nxt);
                ans[nxt] = &val;
                // ans[nxt] = &helper[i];
                nxt = arr[nxt];
            }
            if (vc.size())
            {
                gp.push_back(vc);
                // cout << vc.size() << endl;
                val = vc.size();
                // cout << "ans[i] " << *ans[i] << endl;
                // cout << "ans[nxt] " << *ans[nxt] << endl;
            }
        }

        for (auto vc : gp)
        {
            for (auto val : vc)
            {
                cout << val << " ";
            }
            cout << endl;
        }

        // for (int i = 1; i <= n; i++)
        //     cout << *ans[i] << " ";
        // cout << endl;
    }
    return 0;
}
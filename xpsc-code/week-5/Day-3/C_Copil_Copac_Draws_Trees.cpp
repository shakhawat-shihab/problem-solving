#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 3;
vector<pair<int, int>> adj_list[N];
vector<int> dp;
map<pair<int, int>, int> mp;

void dfs(int crnt, int parent)
{
    for (auto adj_node : adj_list[crnt])
    {
        int to = adj_node.first;
        int ind = adj_node.second;
        if (to == parent)
        {
            continue;
        }
        mp[{crnt, to}] = ind;
        mp[{to, crnt}] = ind;

        if (dp[crnt] != INT_MAX)
        {
            if (crnt == 1)
            {
                dp[to] = 1;
            }
            else
            {
                if (ind > mp[{crnt, parent}])
                {
                    dp[to] = dp[crnt];
                }
                else
                {
                    dp[to] = dp[crnt] + 1;
                }
            }
        }
        dfs(to, crnt);
    }
}

int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {

        int n;
        cin >> n;

        for (int i = 0; i <= n; i++)
        {
            adj_list[i].clear();
        }

        dp.assign(n + 1, INT_MAX);
        dp[0] = 0;
        dp[1] = 0;
        mp.clear();

        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            adj_list[u].push_back({v, i});
            adj_list[v].push_back({u, i});
        }

        dfs(1, -1);

        int ans = *max_element(dp.begin(), dp.end());
        cout << ans << endl;
    }
    return 0;
}
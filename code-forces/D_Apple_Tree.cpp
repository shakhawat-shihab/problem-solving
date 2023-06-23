#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 1;
vector<int> adj_list[N];
long long dp[N];
int vis[N];

void dfs(int src)
{
    if (adj_list[src].size() == 1 && src != 1)
    {
        dp[src] = 1;
        return;
    }
    vis[src] = 1;
    for (auto child : adj_list[src])
    {
        if (vis[child] == 0)
        {
            dfs(child);
            dp[src] += dp[child];
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            adj_list[i].clear();
            dp[i] = 0;
            vis[i] = 0;
        }

        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }

        // for (int i = 1; i <= n; i++)
        // {
        //     for (auto child : adj_list[i])
        //     {
        //         cout << i << " - " << child << endl;
        //     }
        // }
        // cout << "f" << endl;

        int q;
        cin >> q;

        dfs(1);

        while (q--)
        {
            int f1, f2;
            cin >> f1 >> f2;
            cout << dp[f1] * dp[f2] << endl;
        }
    }
    return 0;
}
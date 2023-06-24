#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
vector<int> adj_list[N];

vector<int> vis(N, 0);
vector<long long> dp(N, 0);

void dfs(int src)
{
    vis[src] = 1;
    if (src != 1 && adj_list[src].size() == 1)
    {
        // cout << "f " << src << endl;
        dp[src] = 1;
        return;
    }
    for (auto child : adj_list[src])
    {

        if (vis[child] == 0)
        {
            // cout << "d " << child << endl;
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

        for (int i = 0; i <= n; i++)
        {
            adj_list[i].clear();
            dp[i] = 0;
            vis[i] = 0;
        }

        while (n > 1)
        {
            int u, v;
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
            n--;
        }

        dfs(1);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            cout << dp[x] * dp[y] << endl;
        }
    }
    return 0;
}
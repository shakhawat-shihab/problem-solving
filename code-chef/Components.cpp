#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
vector<int> adj[N];
vector<int> ans;

int cnt = 0;

void dfs(int crnt, vector<int> &vis)
{
    vis[crnt] = 1;
    cnt++;
    for (auto child : adj[crnt])
    {
        if (vis[child] == 0)
        {
            dfs(child, vis);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        mp[u]++;
        mp[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans;
    vector<int> vis(1005, 0);
    for (int i = 0; i < 1005; i++)
    {
        if (vis[i] == 0 && mp[i])
        {
            cnt = 0;
            dfs(i, vis);
            if (cnt > 1)
                ans.push_back(cnt);
        }
    }

    sort(ans.begin(), ans.end());

    for (auto val : ans)
        cout << val << " ";
    cout << endl;

    return 0;
}
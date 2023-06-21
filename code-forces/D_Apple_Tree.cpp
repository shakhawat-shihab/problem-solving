#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 1;
vector<int> adj_list[N];

int bfs(int src, vector<int> &visited)
{
    // cout << "src " << src << endl;
    int cnt = 0;
    queue<int> q;
    q.push(src);
    visited[src] = 1;
    while (q.size())
    {
        int top = q.front();
        q.pop();
        if (adj_list[top].size() == 0 && top != 1)
        {
            // cout << "top " << top << endl;
            visited[top] = 1;
            cnt++;
        }
        else
        {
            for (auto child : adj_list[top])
            {
                if (visited[child] == 0)
                {
                    q.push(child);
                    visited[child] = 1;
                }
            }
        }
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vector<int> adj_list[n + 1];
        // adj_list.clear();
        // fill(adj_list.begin(), adj_list.end(), 0);
        memset(adj_list, 0, sizeof(adj_list));
        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            // if (u < v)
            adj_list[u].push_back(v);
            // else
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
        vector<int> vis(n + 1, 0);
        while (q--)
        {
            int f1, f2;
            cin >> f1 >> f2;
            fill(vis.begin(), vis.end(), 0);
            long long ans1 = bfs(f1, vis);
            fill(vis.begin(), vis.end(), 0);
            long long ans2 = bfs(f2, vis);
            // cout << ans1 << " " << ans2 << endl;
            cout << ans1 * ans2 << endl;
        }
    }
    return 0;
}
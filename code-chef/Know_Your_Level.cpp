#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int visited[N];
int level[N];

vector<int> adj_list[N];

void BFS(int src)
{
    queue<int> q;
    visited[src] = 1;
    level[src] = 0;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();

        for (auto adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                level[adj_node] = level[head] + 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        if (u != v)
        {
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
    }

    int targetLevel;
    cin >> targetLevel;

    if (targetLevel == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    BFS(0);

    vector<int> ans;
    for (int i = 0; i <= N; i++)
    {
        if (level[i] == targetLevel)
        {
            ans.push_back(i);
        }
    }

    if (ans.size() == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    sort(ans.begin(), ans.end());
    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

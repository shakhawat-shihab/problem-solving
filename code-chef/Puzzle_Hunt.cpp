#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
vector<int> ans;
int visited[N];

void bfs(int s, int targetLevel)
{
    queue<int> q;
    q.push(s);
    int crntLevel = 0;

    while (!q.empty())
    {
        crntLevel++;
        // cout << "\nlevel " << crntLevel << endl;
        int len = q.size();
        while (len--)
        {
            int u = q.front();
            // cout << "crnt " << u << " ==> ";
            q.pop();
            visited[u] = 1;
            for (int v : adj[u])
            {
                // cout << v << ", ";
                if (visited[v] == 0)
                {
                    if (crntLevel == targetLevel)
                    {
                        ans.push_back(v);
                    }
                    q.push(v);
                }
            }
            // cout << endl;
        }
        // cout << endl;

        if (crntLevel == targetLevel)
        {
            return;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int target_level;
    cin >> target_level;

    if (target_level == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    ans.clear();
    bfs(0, target_level);

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
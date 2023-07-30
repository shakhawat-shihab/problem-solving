#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxN = 1e5 + 10;
int parentArr[maxN], rankArr[maxN];

int find_(int node)
{
    if (node == parentArr[node])
        return node;
    int x = find_(parentArr[node]);
    parentArr[node] = x;
    return parentArr[node];
}

void union_(int u, int v)
{
    int parentArrU = find_(u);
    int parentArrV = find_(v);
    if (rankArr[parentArrU] > rankArr[parentArrV])
    {
        parentArr[parentArrV] = parentArrU;
    }
    else if (rankArr[parentArrU] < rankArr[parentArrV])
    {
        parentArr[parentArrU] = parentArrV;
    }
    else
    {
        parentArr[parentArrU] = parentArrV;
        rankArr[parentArrU]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    for (int i = 1; i <= n; i++)
        parentArr[i] = i;

    while (m--)
    {
        int u, v;
        cin >> u >> v;
    }

    map<int, tuple<string, int, int>, greater<int>> mp;
    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        int u, v;
        cin >> u >> v;
        mp[i] = make_tuple(s, u, v);
    }

    vector<string> ans;
    for (auto val : mp)
    {
        tuple<string, int, int> t = val.second;
        string query;
        int u, v;
        query = get<0>(t);
        u = get<1>(t);
        v = get<2>(t);
        // cout << query << " " << u << " " << v << endl;

        if (query == "ask")
        {
            if (find_(u) == find_(v))
                ans.push_back("YES");
            else
                ans.push_back("NO");
        }
        else
            union_(u, v);
    }
    reverse(ans.begin(), ans.end());
    for (auto val : ans)
        cout << val << '\n';
    cout << '\n';
    return 0;
}
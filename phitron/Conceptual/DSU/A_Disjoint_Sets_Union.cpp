// Problem Link -  https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/A

#include <bits/stdc++.h>
using namespace std;

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
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < maxN; i++)
        parentArr[i] = i;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        string query;
        cin >> query;
        int u, v;
        cin >> u >> v;
        if (query == "union")
            union_(u, v);
        else
        {
            if (find_(u) == find_(v))
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}
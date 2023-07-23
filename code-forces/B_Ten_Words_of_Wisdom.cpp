#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int, int> x, pair<int, int> y)
{
    return x.first > y.first;
}

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
        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a <= 10)
                vp.push_back({b, i + 1});
        }
        sort(vp.begin(), vp.end(), cmp);
        cout << vp[0].second << endl;
    }
    return 0;
}
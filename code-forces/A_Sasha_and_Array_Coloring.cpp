#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        vector<int> vc;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            // if (mp[x] == 0)
            // {
            vc.push_back(x);
            // }
            // mp[x]++;
        }
        sort(vc.begin(), vc.end());

        // for (int i = 0; i < vc.size(); i++)
        // {
        //     cout << vc[i] << " ";
        // }
        // cout << endl;

        int cost = 0;
        int mid = vc.size() / 2;
        for (int i = 0; i < mid; i++)
        {
            int dif = vc[vc.size() - 1 - i] - vc[i];
            cost += dif;
        }
        cout << cost << endl;
    }
    return 0;
}
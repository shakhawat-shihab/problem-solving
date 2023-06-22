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
        char curr;
        cin >> curr;
        string s;
        cin >> s;

        if (curr == 'g')
        {
            cout << 0 << endl;
            continue;
        }

        vector<int> vc, qu;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'g')
            {
                vc.push_back(i);
                vc.push_back(n + i);
            }
            if (s[i] == curr)
            {
                qu.push_back(i);
            }
        }

        sort(vc.begin(), vc.end());

        // for (auto val : vc)
        // {
        //     cout << val << " ";
        // }
        // cout << endl;

        // for (auto val : qu)
        // {
        //     cout << val << " ";
        // }
        // cout << endl;

        int mx = 0;
        for (auto val : qu)
        {
            int ub = upper_bound(vc.begin(), vc.end(), val) - vc.begin();
            mx = max(vc[ub] - val, mx);
        }
        cout << mx << endl;
    }
    return 0;
}
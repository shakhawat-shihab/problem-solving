#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        vector<int> vc;
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != last)
            {
                vc.push_back(x);
            }
        }

        vector<int> ans;
        // int sm=INT_MAX,bg=0;
        int prvs = vc[0];
        ans.push_back(vc[0]);
        int incr = 0, dcr = 0;
        for (int i = 1; i < vc.size(); i++)
        {
            if (vc[i] > prvs)
            {
                incr = 1;
                if (incr && dcr)
                {
                    ans.push_back(prvs);
                    dcr = 0;
                }
            }
            else if (vc[i] < prvs)
            {
                dcr = 1;
                if (incr && dcr)
                {
                    ans.push_back(prvs);
                    incr = 0;
                }
            }
            prvs = vc[i];
        }
        if (incr || dcr)
        {
            ans.push_back(vc[vc.size() - 1]);
        }
        cout << ans.size() << endl;
    }
    return 0;
}
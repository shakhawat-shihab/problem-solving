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

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int cnt = 0;
            int val = x;
            while (val % 2 == 0)
            {
                val = val / 2;
                cnt++;
            }
            sum += cnt;
        }

        vector<int> vc2;
        for (int i = 2; i <= n; i++)
        {
            int cnt = 0;
            int val = i;
            while (val % 2 == 0)
            {
                val = val / 2;
                cnt++;
            }
            vc2.push_back(cnt);
        }

        sort(vc2.rbegin(), vc2.rend());

        // for (auto val : vc2)
        // {
        //     cout << val << " ";
        // }
        // cout << endl;

        int operation = 0;
        if (sum >= n)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt = 0;
            for (int i = 0; i < vc2.size(); i++)
            {
                sum += vc2[i];
                operation++;
                if (sum >= n)
                {
                    cout << operation << endl;
                    break;
                }
            }
        }
        if (sum < n)
            cout << -1 << endl;
    }
    return 0;
}

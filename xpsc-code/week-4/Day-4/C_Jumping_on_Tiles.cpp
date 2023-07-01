#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;

        int n = a.size();

        vector<int> indexes[26];

        vector<int> ans;

        int m = 0;

        for (int i = 0; i < n; i++)
        {

            indexes[a[i] - 97].push_back(i + 1);
        }

        int cost = abs(a[0] - a[n - 1]);

        if (a[n - 1] > a[0])
        {
            for (int i = a[0] - 97; i <= a[n - 1] - 97; i++)
            {
                int l = indexes[i].size();
                m = m + l;
                for (int j = 0; j < l; j++)
                {
                    ans.push_back(indexes[i][j]);
                }
            }
        }
        else
        {
            for (int i = a[0] - 97; i >= a[n - 1] - 97; i--)
            {
                int l = indexes[i].size();
                m = m + l;
                for (int j = 0; j < l; j++)
                {
                    ans.push_back(indexes[i][j]);
                }
            }
        }

        cout << cost << " " << m << "\n";

        for (int i = 0; i < m; i++)
        {

            cout << ans[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
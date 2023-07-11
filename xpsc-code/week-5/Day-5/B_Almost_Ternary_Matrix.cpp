#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n, m;
        cin >> n >> m;
        int pat1[4] = {1, 0, 0, 1};
        int pat2[4] = {0, 1, 1, 0};
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i % 4 == 0 || i % 4 == 1)
                {
                    cout << pat1[j % 4] << " ";
                }
                else
                {
                    cout << pat2[j % 4] << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
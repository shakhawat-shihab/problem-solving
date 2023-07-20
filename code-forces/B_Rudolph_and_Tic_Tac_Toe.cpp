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
        int n = 3;
        char grid[3][3];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
            }
        }

        int f = 0;
        // row
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (grid[i][j] == grid[i][j + 1] && grid[i][j] != '.')
                {
                    cnt++;
                }
            }
            if (cnt == 2)
            {
                // cout << "row" << endl;
                cout << grid[i][0] << endl;
                f = 1;
                break;
            }
        }
        if (f == 1)
            continue;

        // column
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (grid[j][i] == grid[j + 1][i] && grid[j][i] != '.')
                {
                    cnt++;
                }
            }
            if (cnt == 2)
            {
                cout << grid[0][i] << endl;
                f = 1;
                break;
            }
        }

        if (f == 1)
            continue;

        // diagonal
        if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[1][1] != '.')
        {
            // cout << "here" << endl;
            cout << grid[1][1] << endl;
            continue;
        }
        else if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[1][1] != '.')
        {
            cout << grid[1][1] << endl;
            continue;
        }

        cout << "DRAW" << endl;
    }
    return 0;
}
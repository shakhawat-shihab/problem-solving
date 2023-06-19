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
        int arr[n + 1][n + 1];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                char c;
                cin >> c;
                arr[i][j] = c - '0';
            }
        }

        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= n; j++)
        //     {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        int x[4], y[4];
        x[0] = 0, y[0] = 0;
        x[1] = 0, y[1] = n + 1;
        x[2] = n + 1, y[2] = n + 1;
        x[3] = n + 1, y[3] = 0;

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int cnt0 = 0, cnt1 = 0;
                // p0
                if (arr[i][j] == 0)
                {
                    cnt0++;
                }
                else
                {
                    cnt1++;
                }

                int dx = i - x[0];
                int dy = j - y[0];

                // p1
                int p1x = x[1] + dy;
                int p1y = y[1] - dx;
                if (arr[p1x][p1y] == 0)
                {
                    cnt0++;
                }
                else
                {
                    cnt1++;
                }

                // p2
                int p2x = x[2] - dx;
                int p2y = y[2] - dy;
                if (arr[p2x][p2y] == 0)
                {
                    cnt0++;
                }
                else
                {
                    cnt1++;
                }

                // p3
                int p3x = x[3] - dy;
                int p3y = y[3] + dx;
                if (arr[p3x][p3y] == 0)
                {
                    cnt0++;
                }
                else
                {
                    cnt1++;
                }
                // cout << cnt0 << " " << cnt1 << endl;
                ans += min(cnt0, cnt1);
            }
        }
        cout << ans / 4 << endl;
    }
    return 0;
}
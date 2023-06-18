#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int r = i, c = j;
                int sm = 0;
                while (1)
                {
                    r++;
                    c++;
                    if (r < n && c < m)
                        sm += arr[r][c];
                    else
                        break;
                }
                r = i, c = j;
                while (1)
                {
                    r--;
                    c--;
                    if (r >= 0 && c >= 0)
                        sm += arr[r][c];
                    else
                        break;
                }
                int dig1 = sm;
                // cout << dig1 << endl;

                sm = 0;
                r = i, c = j;
                while (1)
                {
                    r++;
                    c--;
                    if (r < n && c >= 0)
                        sm += arr[r][c];
                    else
                        break;
                }
                r = i, c = j;
                while (1)
                {
                    r--;
                    c++;
                    if (r >= 0 && c < m)
                        sm += arr[r][c];
                    else
                        break;
                }
                int dig2 = sm;

                int ans = dig1 + dig2 + arr[i][j];
                mx = max(mx, ans);
            }
        }

        cout << mx << endl;
    }
    return 0;
}
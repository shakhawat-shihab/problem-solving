#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    // for (int i = 0; i < 6; i++)
    // {
    //     for (int j = 0; j < 6; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int mx = INT_MIN;
    for (int i = 0; i < 6 - 2; i++)
    {
        for (int j = 0; j < 6 - 2; j++)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    if (k == 1 & l != 1)
                    {
                        continue;
                    }
                    sum += arr[i + k][j + l];
                }
            }
            mx = max(mx, sum);
            // cout << sum << endl;
        }
    }
    cout << mx << endl;

    return 0;
}
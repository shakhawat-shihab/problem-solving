#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int j = 0, i = 0;
        int k = s;
        int crnt = 0;
        int mx = -1;
        while (j < n)
        {
            if (arr[j] == 1)
                crnt++;
            if (crnt < k)
            {
                j++;
            }
            else if (crnt == k)
            {
                mx = max(mx, j - i + 1);
                j++;
            }
            else
            {
                while (crnt > k)
                {
                    if (arr[i] == 1)
                    {
                        crnt--;
                    }
                    i++;
                }
                mx = max(mx, j - i + 1);
                j++;
            }
        }
        if (mx == -1)
            cout << -1 << endl;
        else
            cout << n - mx << endl;
    }
    return 0;
}
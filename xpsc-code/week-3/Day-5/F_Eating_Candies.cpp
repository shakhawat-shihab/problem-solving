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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i = 0, j = n - 1;
        int sm1 = 0, sm2 = 0;
        int mx = 0;
        while (i <= j)
        {
            if (sm1 == sm2)
            {
                mx = max(mx, (n - 1 - j) + i);
                sm2 += arr[j];
                j--;
            }
            else if (sm1 < sm2)
            {
                sm1 += arr[i];
                i++;
            }
            else
            {
                sm2 += arr[j];
                j--;
            }
            // cout << sm1 << " " << sm2 << endl;
        }
        if (sm1 == sm2)
        {
            mx = max(mx, (n - 1 - j) + i);
        }
        cout << mx << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int f = 0;
    for (int i = 1; i < (1 << n); i++)
    {
        int val = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                val += arr[j];
                // cout << "+" << arr[j] << " ";
            }
            else
            {
                val -= arr[j];
                // cout << "-" << arr[j] << " ";
            }
        }
        // cout << endl;
        if (val % 360 == 0)
        {
            f = 1;
            break;
        }
    }

    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
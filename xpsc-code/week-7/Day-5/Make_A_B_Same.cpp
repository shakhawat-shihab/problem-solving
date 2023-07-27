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
        int n;
        cin >> n;
        int arr[n], brr[n], oneCnt[n] = {};
        int isOne = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            // if (i == 0)
            //     oneCnt[i] =(arr[i] % 2);
            // else
            //     oneCnt[i] = oneCnt[i - 1]+(arr[i]%2)
            if (arr[i] % 2)
                isOne = 1;
        }

        for (int i = 0; i < n; i++)
            cin >> brr[i];

        int f = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != brr[i])
            {
                if (i == 0 || i == n - 1)
                {
                    f = 0;
                    break;
                }
                else if (brr[i] == 1)
                {
                    if (isOne == 0)
                    {
                        f = 0;
                        break;
                    }
                }
                else if (brr[i] == 0)
                {
                    f = 0;
                    break;
                }
            }
        }
        if (f == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
// https://codeforces.com/contest/1097/problem/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int flag = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int bitPos = 0; bitPos < n; bitPos++)
        {
            if (i & (1 << bitPos))
            {
                sum += arr[bitPos];
            }
            else
            {
                sum -= arr[bitPos];
            }
        }
        // cout << sum << endl;
        if (abs(sum) % 360 == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
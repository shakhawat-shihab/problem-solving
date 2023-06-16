#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(arr[i], mx);
    }

    int ans = INT_MIN;
    int num = 2;
    for (int i = 2; i <= mx; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % i == 0)
            {
                cnt++;
            }
        }
        if (cnt > ans)
        {
            ans = cnt;
            num = i;
        }
    }
    cout << num << endl;

    return 0;
}
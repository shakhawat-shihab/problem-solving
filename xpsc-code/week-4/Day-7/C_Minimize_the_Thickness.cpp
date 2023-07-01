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

        int ans = n;
        int segSum = 0;
        for (int i = 0; i < n; i++)
        {
            segSum += arr[i];
            int sum = 0;
            int mxLen = i + 1;
            int len = 0;
            bool possible = false;
            for (int j = i + 1; j < n; j++)
            {
                if (sum + arr[j] > segSum)
                {
                    break;
                }
                if (j == n - 1 && sum + arr[j] == segSum)
                {
                    mxLen = max(mxLen, len + 1);
                    possible = true;
                    break;
                }
                sum += arr[j];
                len++;

                if (sum  == segSum)
                {
                    mxLen = max(mxLen, len);
                    len = 0;
                    sum = 0;
                }
            }
            if (possible)
            {
                ans = min(ans, mxLen);
            }
        }
        cout << ans << endl;
    }
    return 0;
}

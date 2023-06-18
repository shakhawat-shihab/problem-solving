#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        int k;
        cin >> k;
        long long cnt = 0;

        if (k == 1)
        {
            cout << 1 << endl;
            continue;
        }

        // sort(arr, arr + 3);

        for (int i = 0; i < 3; i++)
        {
            if (arr[i] >= k)
            {
                cnt += k - 1;
            }
            else
            {
                cnt += arr[i];
            }
        }

        cout << cnt + 1 << endl;
    }
    return 0;
}
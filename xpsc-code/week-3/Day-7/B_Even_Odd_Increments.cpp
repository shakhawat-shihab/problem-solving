#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        int odd = 0, even = 0;

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] & 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
            sum += arr[i];
        }

        while (q--)
        {
            long long t, val;
            cin >> t >> val;

            // odd
            if (t & 1)
            {
                // odd
                if (val & 1)
                {
                    val = val * odd;
                    even += odd;
                    odd = 0;
                }
                else
                {
                    val = val * odd;
                }
            }
            // even
            else
            {
                // odd
                if (val & 1)
                {
                    val = val * even;
                    odd += even;
                    even = 0;
                }
                else
                {
                    val = val * even;
                }
            }
            sum += val;
            cout << sum << endl;
        }
    }
    return 0;
}
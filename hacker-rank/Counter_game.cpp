#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int isLouise = 1;
        while (n != 1)
        {
            // cout << "n " << n << endl;
            if ((n & (n - 1)) == 0)
            {
                // n is power of two
                n = n / 2;
            }
            else
            {
                int bitCnt = 0;
                int val = n;
                while (val)
                {
                    val = val >> 1;
                    bitCnt++;
                }
                // cout << "bitCnt " << bitCnt << endl;
                n = n - pow(2, bitCnt - 1);
            }
            isLouise++;
        }

        if (isLouise % 2 == 0)
        {
            cout << "Louise" << endl;
        }
        else
        {
            cout << "Richard" << endl;
        }
    }
    return 0;
}
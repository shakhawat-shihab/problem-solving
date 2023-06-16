#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long x;
        cin >> x;
        long long bitCnt = 0;
        unsigned long long val = x;
        while (val)
        {
            val = val >> 1;
            bitCnt++;
        }
        // cout << pow(2, bitCnt) << endl;
        unsigned long long nxt = pow(2, bitCnt);
        cout << nxt - 1 - x << endl;
    }
    return 0;
}
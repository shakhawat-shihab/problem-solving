#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int mx = 0;
    while (n)
    {
        int digit = n % 2;
        n = n / 2;
        if (digit == 1)
        {
            cnt++;
        }
        else
        {
            mx = max(mx, cnt);
            cnt = 0;
        }
    }
    mx = max(mx, cnt);
    cout << mx << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x % k == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
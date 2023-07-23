#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int smallestPrimeFactor(int n)
{
    if (n % 2 == 0)
    {
        return 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            return i;
            n = n / i;
        }
    }
    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int x, y;
        cin >> x >> y;
        // int val = smallestPrimeFactor(x);

        if (x % 2 == 0)
        {
            int val = ceil((y - x) / 2.0);
            cout << val << endl;
            // continue;
        }
        else
        {
            int ans = 0;
            x += smallestPrimeFactor(x);
            ans++;
            ans += ceil((y - x) / 2.0);
            cout << ans << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long func(long long n)
{
    if (n % 8 == 0 || n % 8 == 1)
    {
        return n;
    }
    else if (n % 8 == 2 || n % 8 == 3)
    {
        return 2;
    }
    else if (n % 8 == 4 || n % 8 == 5)
    {
        return n + 2;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        cout << (func(l - 1) ^ func(r)) << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long getXOR(long long n)
{
    if (n % 4 == 3)
    {
        return 0;
    }
    else if (n % 4 == 2)
    {
        return n + 1;
    }
    else if (n % 4 == 1)
    {
        return 1;
    }
    else
    {
        return n;
    }
}

int main()
{
    long long a, b;
    cin >> a >> b;
    if (a == 0)
    {
        cout << getXOR(b) << endl;
    }
    else
    {
        cout << (getXOR(b) ^ getXOR(a - 1)) << endl;
    }
    return 0;
}
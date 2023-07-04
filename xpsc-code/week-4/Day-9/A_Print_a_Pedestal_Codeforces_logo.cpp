#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n;
        cin >> n;
        int m = n / 3;
        int l = m - 1;
        int h = m + 1;
        int rem = n % 3;
        if (rem == 0)
            cout << m << " " << h << " " << l << endl;
        else if (rem == 1)
            cout << m << " " << h + 1 << " " << l << endl;
        else if (rem == 2)
            cout << m + 1 << " " << h + 1 << " " << l << endl;
    }
    return 0;
}
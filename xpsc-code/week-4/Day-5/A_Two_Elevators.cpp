#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int t1 = a - 1;
        int t2 = 0;
        if (b >= c)
        {
            t2 = b - 1;
        }
        else
        {
            t2 += (c - b);
            t2 += (c - 1);
        }

        // cout << t1 << " " << t2 << endl;
        if (t1 < t2)
        {
            cout << 1 << endl;
        }
        else if (t1 > t2)
        {
            cout << 2 << endl;
        }
        else if (t1 == t2)
        {
            cout << 3 << endl;
        }
    }
    return 0;
}
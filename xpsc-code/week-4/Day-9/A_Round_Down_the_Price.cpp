#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int m;
        cin >> m;
        int i = 1;
        while (1)
        {
            if (i > m)
            {
                break;
            }
            i = i * 10;
        }
        cout << m - i / 10 << endl;
    }
    return 0;
}
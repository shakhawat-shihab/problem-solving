#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        int b[3];
        cin >> b[0] >> b[1] >> b[2];
        sort(b, b + 3);
        if (a[1] + a[2] > b[1] + b[2])
        {
            cout << "Alice" << endl;
        }
        else if (a[1] + a[2] < b[1] + b[2])
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}
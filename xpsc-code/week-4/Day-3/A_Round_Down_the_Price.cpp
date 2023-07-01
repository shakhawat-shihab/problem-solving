#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 1;
        while (1)
        {
            if (i * 10 > n)
            {
                break;
            }
            i = i * 10;
        }
        cout << n - i << endl;
    }
    return 0;
}
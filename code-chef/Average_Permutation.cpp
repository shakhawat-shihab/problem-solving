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
        int odd;
        if (n % 2 == 0)
        {
            odd = n - 1;
        }
        else
        {
            odd = n;
        }
        for (int i = odd; i >= 1; i -= 2)
        {
            cout << i << " ";
        }
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
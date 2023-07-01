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
        if (n == 3)
        {
            cout << -1;
        }
        else if (n % 2 == 0)
        {
            for (int i = n; i >= 1; i--)
            {
                cout << i << " ";
            }
        }
        else
        {
            int mid = n / 2;
            for (int i = mid; i <= n; i++)
            {
                cout << i << " ";
            }
            for (int i = 1; i < mid; i++)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
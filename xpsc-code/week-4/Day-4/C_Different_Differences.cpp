#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k >> n;
        int crnt = 1;
        int diff = 1;
        for (int i = 1; i <= k; i++)
        {
            cout << crnt << " ";
            if (n - (crnt + diff) >= (k - i - 1))
            {
                crnt = crnt + diff;
                diff++;
            }
            else
            {
                crnt++;
            }
        }
        cout << endl;
    }
    return 0;
}
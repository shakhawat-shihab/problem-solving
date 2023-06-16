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
        int x;
        cin >> x;
        int oddIndex = x % 2;
        cin >> x;
        int evenIndex = x % 2;
        int flag = 0;

        // cout << oddIndex << " , " << evenIndex << endl;

        for (int i = 3; i <= n; i++)
        {
            cin >> x;
            if (flag == 0)
            {
                if (i % 2 == 1)
                {
                    if (x % 2 != oddIndex)
                    {
                        flag = 1;
                    }
                }
                else
                {
                    if (x % 2 != evenIndex)
                    {
                        flag = 1;
                    }
                }
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
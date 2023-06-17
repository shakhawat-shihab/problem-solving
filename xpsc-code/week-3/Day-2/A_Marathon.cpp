#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        int x;
        cin >> x;
        for (int i = 0; i < 3; i++)
        {
            int val;
            cin >> val;
            if (val > x)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
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
        int cnt1 = 0;
        int mx1 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                mx1 = max(mx1, cnt1);
                cnt1 = 0;
            }
            else
            {
                cnt1++;
            }
        }
        mx1 = max(mx1, cnt1);

        int cnt2 = 0;
        int mx2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                mx2 = max(mx2, cnt2);
                cnt2 = 0;
            }
            else
            {
                cnt2++;
            }
        }
        mx2 = max(mx2, cnt2);

        if (mx1 > mx2)
        {
            cout << "Om" << endl;
        }
        else if (mx1 < mx2)
        {
            cout << "Addy" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}
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
        int a = 0, b = 0, ab = 0, o = 0;
        while (n--)
        {
            string x;
            cin >> x;
            if (x == "A")
            {
                a++;
            }
            else if (x == "B")
            {
                b++;
            }
            else if (x == "AB")
            {
                ab++;
            }
            else if (x == "O")
            {
                o++;
            }
        }
        int ans = max(o + a + ab, o + b + ab);
        cout << ans << endl;
    }
    return 0;
}
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
        int sum = 0;
        string s = "";
        for (int i = 9; i > 0; i--)
        {
            if (sum + i <= n)
            {
                s += (i + '0');
                sum += i;
            }
            if (sum == n)
            {
                break;
            }
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
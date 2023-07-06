#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n;
        cin >> n;
        string s, t, u;
        cin >> s >> t >> u;
        // int k = 0;
        int i = s[0] - 'a';
        int j = t[0] - 'a';
        int k = 0;

        while (1)
        {
            if (i == j)
            {
                break;
            }
            i++;
            i %= 26;
            k++;
            // cout << i << endl;
        }
        // cout << k << endl;
        for (int i = 0; i < n; i++)
        {
            int val = (u[i] - 'a') + k;
            // cout << val << endl;
            val = val % 26;
            u[i] = (char)val + 'a';
        }
        cout << u << endl;
    }
    return 0;
}
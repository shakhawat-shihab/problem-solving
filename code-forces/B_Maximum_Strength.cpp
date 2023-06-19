#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n, m;
        cin >> n >> m;

        int lenn = n.length();
        int lenm = m.length();

        // add padding at front
        if (abs(lenn - lenm) > 0)
        {
            if (m.length() > n.length())
            {
                int diff = m.length() - n.length();
                string padding = "";
                while (diff--)
                {
                    padding += "0";
                }
                n.insert(0, padding);
            }
            else
            {
                int diff = n.length() - m.length();
                string padding = "";
                while (diff--)
                {
                    padding += "0";
                }
                m.insert(0, padding);
            }
        }

        // cout << n << " " << m << endl;

        long long ans = 0;
        for (int i = 0; i < n.length(); i++)
        {
            int l = n[i] - '0', r = m[i] - '0';
            if (i == 0)
            {
                ans += abs(l - r);
            }
            else
            {
                if (n[i - 1] < m[i - 1])
                {
                    l = 9;
                    r = 0;
                    n[i] = '9';
                    m[i] = '0';
                }
                else if (n[i - 1] == '9' && m[i - 1] == '0')
                {
                    l = 9;
                    r = 0;
                    n[i] = '9';
                    m[i] = '0';
                }
                ans += abs(l - r);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
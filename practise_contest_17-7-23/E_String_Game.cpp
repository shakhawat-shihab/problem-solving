#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int z = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        int pr = min(z, o);
        if (pr % 2 == 1)
        {
            cout << "Zlatan" << endl;
        }
        else
        {
            cout << "Ramos" << endl;
        }
    }
    return 0;
}
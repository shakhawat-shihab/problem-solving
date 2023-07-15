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
        // char crnt = '$';
        int o = 0, l = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                o++;
            }
            else
            {
                l++;
            }
        }
        if (min(o, l) % 2 == 0)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "Zlatan" << endl;
        }
    }
    return 0;
}
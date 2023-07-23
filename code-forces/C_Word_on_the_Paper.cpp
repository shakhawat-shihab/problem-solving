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
        char g[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> g[i][j];
            }
        }

        string s = "";
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (g[j][i] != '.')
                {
                    s += g[j][i];
                }
            }
            if (s != "")
            {
                break;
            }
        }

        cout << s << endl;
    }
    return 0;
}
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
        unordered_map<string, int> mp;
        string str[3][n];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> str[i][j];
                // cout << str[i][j] << endl;
                mp[str[i][j]]++;
            }
        }
        int player[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[str[i][j]] == 1)
                {
                    player[i] += 3;
                }
                else if (mp[str[i][j]] == 2)
                {
                    player[i] += 1;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            cout << player[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
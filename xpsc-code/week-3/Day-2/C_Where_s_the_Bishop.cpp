#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s[8];
        for (int i = 0; i < 8; i++)
        {
            cin >> s[i];
        }

        pair<int, int> pos1, pos2;
        int cnt = 0;
        int flag = 0;

        pair<int, int> pos;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (s[i][j] == '#')
                {
                    cnt++;
                    pos = {i + 1, j + 1};
                }
            }
            if (cnt == 2 && flag == 0)
            {
                flag = 1;
            }
            if (cnt == 1 && flag == 1)
            {
                break;
            }
            cnt = 0;
        }
        cout << pos.first << " " << pos.second << endl;
    }
    return 0;
}
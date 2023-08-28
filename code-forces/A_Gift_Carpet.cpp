#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define mii map<int, int>
#define pii pair<int, int>
#define pll pair<ll, ll>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    for (int Case = 1; Case <= t; Case++)
    {
        int r, c;
        cin >> r >> c;

        char arr[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> arr[i][j];
            }
        }

        int crnt = 0;
        string s = "vika";
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {
                if (arr[j][i] == s[crnt])
                {
                    crnt++;
                    break;
                }
            }
        }

        if (crnt == 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
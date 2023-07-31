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
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        int mx = -1;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                mx = max(i + 1, mx);
            }
            else
            {
                cnt++;
            }
        }

        if (cnt == 0)
        {
            cout << 0 << endl;
        }
        else if (mx > n / 2)
        {
            cout << 1 << endl;
            cout << mx << endl;
        }
        else if (mx <= n / 2)
        {
            cout << 2 << endl;
            cout << n << " " << n - 1 << endl;
        }
    }
    return 0;
}
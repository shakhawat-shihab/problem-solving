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
        int an, a1, n;
        cin >> a1 >> an >> n;
        int diff = an - a1;
        int x = n - 1;
        int sum = (x * (x + 1)) / 2;
        // cout << sum << " " << diff << endl;
        if (sum > diff)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> arr(n, 0);
            int crnt = 0;
            for (int i = n - 1; i > 0; i--)
            {
                arr[i] = an - crnt;
                an = arr[i];
                crnt++;
            }
            arr[0] = a1;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
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
        int n, x;
        cin >> n >> x;
        if (n % x == 0)
        {
            int arr[n + 1] = {};
            for (int i = 1; i <= n; i++)
            {
                arr[i] = i;
            }

            arr[1] = x;
            arr[n] = 1;

            if (n == x)
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
                continue;
            }

            arr[x] = n;

            for (int i = 2; i < n; i++)
            {
                if (i % x == 0 && n % i == 0)
                {
                    swap(arr[i], arr[x]);
                    x = i;
                }
            }

            for (int i = 1; i <= n; i++)
            {
                if (arr[i] == 0)
                    cout << i << " ";
                else
                    cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
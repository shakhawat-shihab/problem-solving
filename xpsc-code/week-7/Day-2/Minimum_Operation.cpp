#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int range = 1e6 + 5;
vector<int> prime(range, 1);

void primeGenerate()
{
    for (int i = 2; i <= sqrt(range); i++)
    {
        for (int j = i + i; j <= range; j += i)
        {
            prime[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    primeGenerate();
    for (int Case = 1; Case <= t; Case++)
    {
        int n, m;
        cin >> n >> m;
        int allSimilar = 1;
        int prvs = -1;
        int mx = 0;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mx = max(mx, x);

            if (x % 2)
            {
                odd++;
            }
            else
            {
                even++;
            }

            if (prvs != -1 && prvs != x)
            {
                allSimilar = 0;
            }
            prvs = x;
        }

        if (allSimilar)
        {
            cout << 0 << endl;
            continue;
        }
        if (odd == 0 || even == 0)
        {
            cout << 1 << endl;
            cout << 2 << endl;
        }

        int ans = 0;
        for (int i = m; i >= 2; i--)
        {
            if (prime[i])
            {
                ans = i;
                break;
            }
        }

        cout << 1 << endl;
        cout << ans << endl;
    }
    return 0;
}
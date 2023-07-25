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
        ll n, m;
        cin >> n >> m;
        n = n / m;
        int mul[10];
        int perRound = 0;
        for (int i = 1; i < 10; i++)
        {
            mul[i] = (m * i) % 10;
            perRound += mul[i];
        }
        // cout << "per round " << perRound << endl;
        long long sum = 0;
        for (int i = 1; i <= n % 10; i++)
        {
            sum += mul[i];
        }

        cout << sum + (n / 10) * perRound << endl;
    }
    return 0;
}
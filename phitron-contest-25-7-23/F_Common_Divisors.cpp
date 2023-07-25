/*
~~~~~~~~~~~~~~~~~
Shakhawat Hossain
~~~~~~~~~~~~~~~~~
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll findGCD(ll a, ll b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

ll cntCommonDivisor(ll arr[], ll n)
{
    ll g = arr[0];
    set<ll> divisors;
    for (ll i = 1; i < n; i++)
    {
        g = findGCD(arr[i], g);
    }

    // get factors of g
    for (ll i = 1; i * i <= g; i++)
    {
        if (g % i == 0)
        {
            divisors.insert(i);
            if (g / i != i)
                divisors.insert(g / i);
        }
    }
    return divisors.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll mx = 0;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << cntCommonDivisor(arr, n) << endl;

    return 0;
}
/*
~~~~~~~~~~~~~~~~~
Shakhawat Hossain
~~~~~~~~~~~~~~~~~
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getGcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return getGcd(b, a % b);
}

int cntCommonDivisor(vector<ll> &arr, int n)
{
    ll g = 0;
    for (auto val : arr)
    {
        g = getGcd(g, val);
    }
    // cout << "gcd " << g << endl;
    vector<int> divisor;
    for (int i = 1; i <= sqrt(g); i++)
    {
        if (g % i == 0)
        {
            divisor.push_back(i);
            if (g / i != i)
                divisor.push_back(g / i);
        }
    }
    return divisor.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << cntCommonDivisor(arr, n) << endl;
    return 0;
}
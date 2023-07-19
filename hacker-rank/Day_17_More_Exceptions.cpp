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
        int n, m;
        cin >> n >> m;
        try
        {
            if (n < 0 || m < 0)
            {
                throw "excep";
            }
            cout << pow(n, m) << endl;
        }
        catch (...)
        {
            cout << "n and p should be non-negative" << endl;
        }
    }
    return 0;
}
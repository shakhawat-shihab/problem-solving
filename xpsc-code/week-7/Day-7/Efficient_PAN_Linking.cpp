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
        string n;
        cin >> n;
        int cnt = 2;
        if (n.length() == 1)
        {
            cout << n << endl;
            continue;
        }
        int digit0 = n[n.length() - 1] - '0';
        int digit1 = n[n.length() - 2] - '0';
        int num = digit0 * 1 + digit1 * 10;
        cout << num % 20 << endl;
    }
    return 0;
}
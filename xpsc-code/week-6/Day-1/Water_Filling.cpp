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
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) <= 1)
        {
            cout << "Water filling time" << endl;
        }
        else
        {
            cout << "Not now" << endl;
        }
    }
    return 0;
}
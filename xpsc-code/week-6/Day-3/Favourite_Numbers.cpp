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
        int n;
        cin >> n;
        if (n % 2 == 0 && n % 7 == 0)
        {
            cout << "Alice" << endl;
        }
        else if (n % 2 == 1 && n % 9 == 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }
    }
    return 0;
}
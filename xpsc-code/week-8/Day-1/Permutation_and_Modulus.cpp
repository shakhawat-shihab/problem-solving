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
        int n;
        cin >> n;
        for (int i = 1; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << 1 << endl;
    }
    return 0;
}
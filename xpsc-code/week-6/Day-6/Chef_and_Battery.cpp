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
        int cnt = 0;
        while (n > 50 || n % 2 == 1)
        {
            n = n - 3;
            cnt++;
        }
        while (n != 50)
        {
            n += 2;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
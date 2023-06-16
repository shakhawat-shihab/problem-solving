#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i += 2)
        {
            int cnt = n - i + 1;
            sum += cnt * cnt;
        }
        cout << sum << endl;
    }

    return 0;
}
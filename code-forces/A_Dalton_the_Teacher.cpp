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
        int arr[n + 1];
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] == i)
            {
                cnt++;
            }
        }
        // cout << "cnt " << cnt << endl;
        if (cnt % 2 == 1)
            cout << cnt / 2 + 1 << endl;
        else
            cout << cnt / 2 << endl;
    }
    return 0;
}
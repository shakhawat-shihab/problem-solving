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
        int arr[n];
        cin >> arr[0];
        int x = arr[0];
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            x &= arr[i];
        }
        cout << x << endl;
    }
    return 0;
}
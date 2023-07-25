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
        int sm = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sm += arr[i];
        }
        int avg = ceil(sm / (double)n);
        cout << avg << endl;
    }
    return 0;
}
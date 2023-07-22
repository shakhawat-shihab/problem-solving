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
        int n, x;
        cin >> n >> x;
        long long arr[n];
        int count[32] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            string s = bitset<32>(arr[i]).to_string();
            reverse(s.begin(), s.end());
            for (int j = 0; j < 32; ++j)
                count[j] += (s[j] - '0');
        }
    }
    return 0;
}
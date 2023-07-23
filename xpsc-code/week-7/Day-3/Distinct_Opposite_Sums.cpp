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
        vector<int> odd, even;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2)
                odd.push_back(i);
            else
                even.push_back(i);
        }

        for (auto val : odd)
            cout << val << " ";
        for (int i = even.size() - 1; i >= 0; i--)
        {
            cout << even[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
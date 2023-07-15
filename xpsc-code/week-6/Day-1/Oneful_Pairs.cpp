#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    // cin >> t;
    // for (int Case = 1; Case <= t; Case++)
    // {
    int a, b;
    cin >> a >> b;
    int res = a + b + (a * b);
    string s = to_string(res);
    int flag = 1;
    // cout << res << " " << s << endl;
    for (auto val : s)
    {
        if (val != '1')
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    // }
    return 0;
}
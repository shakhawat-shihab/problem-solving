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
        ll n, k;
        cin >> n >> k;
        ll arr[n], brr[n];

        map<int, ll> f1, f2;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }

        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            string s1 = to_string(arr[i]);
            string s2 = to_string(brr[i]);
            if (s1.length() != s2.length())
            {
                flag = 0;
                break;
            }
            for (int i = 0; i < s1.length(); i++)
            {
                f1[s1[i] - '0']++;
                f2[s2[i] - '0']++;
            }
        }

        if (flag == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int op = 0;
        for (int i = 0; i < 10; i++)
        {
            // cout << "f1 " << i << " " << f1[i] << endl;
            // cout << "f2 " << i << " " << f2[i] << endl;
            if (f1[i] > f2[i])
            {
                op += f1[i] - f2[i];
                // cout << "i " << i << endl;
            }
        }

        if (op / 2 <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
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
        arr[0] = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
        }

        ll sm = (n * (n + 1)) / 2;

        if (arr[n - 1] > sm)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (arr[n - 1] < sm)
        {
            map<int, int> mp;
            mp[sm - arr[n - 1]]++;
            int f = 1;
            for (int i = n - 1; i > 0; i--)
            {
                int diff = arr[i] - arr[i - 1];
                if (diff > n)
                {
                    f = 0;
                    // cout << "NO" << endl;
                    // break;
                }
                if (mp[diff])
                {
                    f = 0;
                    // cout << "NO" << endl;
                    // break;
                }
                mp[diff]++;
            }
            if (f)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (arr[n - 1] > sm)
        {
            map<int, int> mp;
            int f = 1;
            for (int i = n - 1; i > 0; i--)
            {
                int diff = arr[i] - arr[i - 1];
                mp[diff]++;
            }
            ll sum = 0;
            for (int i = 1; i <= n; i++)
            {
                if (mp[i] == 0)
                {
                    sum += i;
                }
            }
            for (auto val : mp)
            {
                if (val.first > n)
                {
                    if (sum != val.first)
                    {
                        f = 0;
                        break;
                    }
                }
                else if (val.second == 2)
                {
                    if (sum != val.first)
                    {
                        f = 0;
                        break;
                    }
                }
            }

            if (f)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
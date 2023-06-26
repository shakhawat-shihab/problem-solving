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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string s;
        cin >> s;

        int flag = 0;
        unordered_map<int, char> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] == 0)
            {
                mp[arr[i]] = s[i];
            }
            else if (mp[arr[i]] && mp[arr[i]] != s[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    vector<int> vc;
    // mark powe of two;
    for (int i = 0; i < 31; i++)
    {
        vc.push_back(pow(2, i));
    }

    // for (auto val : vc)
    // {
    //     cout << val << " ";
    // }
    // cout << endl;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (auto val : vc)
        {
            if (val - arr[i] == arr[i] && mp[val - arr[i]] > 1)
            {
                flag = 1;
                break;
            }
            if (val - arr[i] != arr[i] && mp[val - arr[i]])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    queue<int> q;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] == 0)
        {
            if (q.size() != k)
            {
                q.push(arr[i]);
                mp[arr[i]] = 1;
            }
            else
            {
                mp[q.front()] = 0;
                q.pop();
                q.push(arr[i]);
                mp[arr[i]] = 1;
            }
        }
    }
    vector<int> vc;
    while (q.size())
    {
        // cout << q.front() << endl;
        vc.push_back(q.front());
        q.pop();
    }
    cout << vc.size() << endl;
    for (int i = vc.size() - 1; i >= 0; i--)
        cout << vc[i] << " ";

    cout << endl;
    return 0;
}
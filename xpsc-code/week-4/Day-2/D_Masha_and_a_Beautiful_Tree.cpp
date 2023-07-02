#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int ans = 0;

void call(int l1, int r1, int l2, int r2)
{
    int mx = INT_MIN;
    for (int i = l1; i < r1; i++)
    {
        mx = max(arr[i], mx);
    }
    int mn = INT_MAX;
    for (int i = l2; i < r2; i++)
    {
        mn = min(arr[i], mn);
    }

    int diff = l2 - l1;
    if (mx > mn)
    {
        for (int i = l1; i < r1; i++)
        {
            swap(arr[i], arr[i + diff]);
        }
        ans++;
    }
    if (l1 == r1)
        return;
    int mid1 = (l1 + r1) / 2;
    int mid2 = (l2 + r2) / 2;

    call(l1, mid1, mid1, r1);
    call(l2, mid2, mid2, r2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        arr.clear();
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << 0 << endl;
            continue;
        }

        int mid = m / 2;
        ans = 0;
        call(0, mid, mid, m);

        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
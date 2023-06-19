#include <bits/stdc++.h>
using namespace std;

int binarySearch(int x, vector<int> &arr, int &found)
{
    int l = 0, r = arr.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            found = 1;
            return mid;
        }
        else if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return l;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        vector<int> sm(n, 0);
        sm[0] = arr[n - 1];
        for (int i = 1; i < n; i++)
        {
            sm[i] = sm[i - 1] + arr[n - i - 1];
        }

        while (q--)
        {
            int x;
            cin >> x;
            int found = 0;
            int pos = binarySearch(x, sm, found);
            if (found)
            {
                cout << pos + 1 << endl;
            }
            else
            {
                if (pos >= n)
                {
                    cout << -1 << endl;
                    continue;
                }
                cout << pos + 1 << endl;
            }
        }
    }
    return 0;
}
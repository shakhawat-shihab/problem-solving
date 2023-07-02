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

        int ans = 0;

        int arr[n];
        vector<pair<int, int>> b;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        reverse(arr, arr + n);

        for (int i = 0; i < n;)
        {
            int j = i;
            while (arr[i] == arr[j] && i < n)
            {
                i++;
            }
            b.push_back({arr[j], i - j});
        }

        n = b.size();
        ans = b[0].second;

        for (int i = 1; i < n; i++)
        {
            if (b[i].first + 1 == b[i - 1].first)
            {
                ans = ans + max(b[i].second - b[i - 1].second, 0);
            }
            else
            {
                ans = ans + b[i].second;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
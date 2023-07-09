#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[n - 1] == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        vector<int> ans;
        cout << "YES" << endl;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 0)
            {
                if (i == 0 or arr[i - 1] == 0)
                {
                    ans.push_back(0);
                }
                else if (arr[i - 1] == 1)
                {
                    int cnt = 0, temp;
                    int j = i - 1;
                    int prev = j;
                    while (j >= 0 and arr[j] == 1)
                    {
                        cnt++;
                        prev = j;
                        j--;
                    }
                    temp = cnt;
                    while (cnt--)
                    {
                        ans.push_back(0);
                    }
                    ans.push_back(temp);
                    i = prev + 1;
                }
            }
        }

        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
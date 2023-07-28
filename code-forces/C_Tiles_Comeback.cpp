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
        int k, n;
        cin >> n >> k;
        int c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        int strt;
        int strtCnt = 0;
        int strtEnd = -1;
        for (int i = 0; i < n; i++)
        {
            if (i == 0 || strt == c[i])
            {
                if (i == 0)
                    strt = c[i];
                strtCnt++;
            }
            if (strtCnt == k)
            {
                strtEnd = i;
                break;
            }
        }

        int end;
        int endCnt = 0;
        int endEnd = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1 || end == c[i])
            {
                if (i == n - 1)
                    end = c[i];
                endCnt++;
            }
            if (endCnt == k)
            {
                endEnd = i;
                break;
            }
        }
        // cout << strtEnd << " " << endEnd << endl;
        if (strtEnd == n - 1)
        {
            cout << "YES" << endl;
        }
        else if (endEnd != -1 && strtEnd != -1 && endEnd > strtEnd)
        {
            cout << "YES" << endl;
        }
        else if (strtEnd != -1 && strt == c[n - 1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
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
        string s;
        cin >> s;

        vector<int> vc(n, 0);
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                cnt += i;
                int crnt = i;
                int rotate = n - i - 1;
                vc.push_back(rotate - crnt);
            }
            else
            {
                cnt += n - i - 1;
                int crnt = n - i - 1;
                int rotate = i;
                vc.push_back(rotate - crnt);
            }
        }

        sort(vc.rbegin(), vc.rend());
        for (int i = 0; i < n; i++)
        {
            if (vc[i] > 0)
            {
                cnt += vc[i];
            }
            cout << cnt << " ";
        }
        cout << endl;
    }
    return 0;
}
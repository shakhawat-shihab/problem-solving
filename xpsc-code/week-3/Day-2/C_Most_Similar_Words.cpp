#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n, m;
        cin >> n >> m;
        string s[(int)n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string s1 = s[i];
                string s2 = s[j];
                int sum = 0;
                for (int l = 0; l < m; l++)
                {
                    int dis = abs(s1[l] - s2[l]);
                    sum += dis;
                }
                ans = min(ans, sum);
            }
        }
        cout << ans << endl;
    }
    return 0;
}

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

        vector<int> vc(200, 0);
        for (int i = 0; i < n; i++)
        {
            vc[(int)s[i]]++;
            // cout << (int)s[i] << " ";
        }
        // cout << endl;

        vector<int> tc(200, 0);
        string ans = "Timur";
        for (int i = 0; i < 5; i++)
        {
            tc[(int)ans[i]]++;
            // cout << (int)ans[i] << " ";
        }
        // cout << endl;

        if (vc == tc)
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
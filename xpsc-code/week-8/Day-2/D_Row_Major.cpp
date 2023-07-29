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
        int n;
        cin >> n;
        set<int> st;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                st.insert(n / i);
                st.insert(i);
            }
        }
        int curr = 1;
        for (auto i : st)
        {
            if (i == curr)
            {
                curr++;
            }
            else
            {
                break;
            }
        }

        vector<string> str(n + 1);
        vector<int> vis(n + 1, 0);
        char ch = 'a';
        for (int i = 1; i <= n; i++)
        {
            if (vis[i])
                continue;
            for (int j = i; j <= n; j += curr)
            {
                vis[j] = 1;
                str[j] = ch;
            }
            ch++;
        }

        for (int i = 1; i <= n; i++)
            cout << str[i];
        cout << endl;
    }
    return 0;
}
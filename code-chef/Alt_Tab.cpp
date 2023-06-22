#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    stack<string> st;
    while (n--)
    {
        string s;
        cin >> s;
        st.push(s);
    }

    unordered_map<string, int> mp;
    string ans = "";
    while (st.size())
    {
        string tmp = st.top();
        st.pop();
        if (mp[tmp] == 0)
        {
            ans += tmp.substr(tmp.length() - 2);
        }
        mp[tmp] = 1;
    }
    cout << ans << endl;
    return 0;
}
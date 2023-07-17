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
        string s;
        cin >> s;
        int v1 = stoi(s.substr(0, 2));
        int v2 = stoi(s.substr(3, 2));
        // cout << v1 << " " << v2 << endl;
        if (v1 < 13 && v2 < 13)
        {
            cout << "BOTH" << endl;
        }
        else if (v1 < 13)
        {
            cout << "MM/DD/YYYY" << endl;
        }
        else
        {
            cout << "DD/MM/YYYY" << endl;
        }
    }
    return 0;
}
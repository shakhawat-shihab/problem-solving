#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length() - 2; i++)
    {
        if (s.substr(i, 3) == "ABC")
        {
            i += 2;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> vc(26, 0);
    for (auto ch : s)
    {
        vc[(int)ch - 'a']++;
    }
    for (int i = 0; i < vc.size(); i++)
    {
        if (vc[i] == 0)
        {
            cout << (char)(i + 'a') << endl;
            return 0;
        }
        // cout << vc[i];
    }
    cout << "None" << endl;
    return 0;
}
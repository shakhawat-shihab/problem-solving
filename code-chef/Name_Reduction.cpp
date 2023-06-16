#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string a, b;
        cin >> a >> b;
        string parentName = a + b;
        vector<int> vc(26, 0);
        for (int i = 0; i < parentName.length(); i++)
        {
            vc[parentName[i] - 'a']++;
        }

        int child;
        cin >> child;
        string childName = "";
        while (child--)
        {
            string s;
            cin >> s;
            childName += s;
        }
        vector<int> tc(26, 0);
        for (int i = 0; i < childName.length(); i++)
        {
            tc[childName[i] - 'a']++;
        }

        int flag = 1;
        for (int i = 0; i < vc.size(); i++)
        {
            if (vc[i] < tc[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
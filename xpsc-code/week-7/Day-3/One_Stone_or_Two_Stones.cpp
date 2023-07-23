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
        int p1, p2;
        cin >> p1 >> p2;
        if (p1 == p2)
        {
            if (p1 % 2 == 1)
                cout << "CHEF" << endl;
            else
            {
                cout << "CHEFINA" << endl;
            }
        }
        else if (abs(p1 - p2) >= 2)
        {
            if (p1 < p2)
            {
                cout << "CHEFINA" << endl;
            }
            else
            {
                cout << "CHEF" << endl;
            }
        }
        else
        {
            if (p1 > p2)
            {
                if (p1 % 2 == 0)
                    cout << "CHEF" << endl;
                else
                    cout << "CHEFINA" << endl;
            }
            else
            {
                if (p2 % 2 == 0)
                    cout << "CHEF" << endl;
                else
                    cout << "CHEFINA" << endl;
            }
        }
    }
    return 0;
}
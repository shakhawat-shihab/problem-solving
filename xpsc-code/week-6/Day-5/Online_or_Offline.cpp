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
        double on, of;
        cin >> on >> of;
        on = on - on * .1;
        if (on > of)
        {
            cout << "DINING" << endl;
        }
        else if (on < of)
        {
            cout << "ONLINE" << endl;
        }
        else
        {
            cout << "EITHER" << endl;
        }
    }
    return 0;
}
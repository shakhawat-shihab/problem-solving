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
        if (n < 11)
        {
            cout << "Lower Double" << endl;
        }
        else if (n < 16)
        {
            cout << "Lower Single" << endl;
        }
        else if (n < 26)
        {
            cout << "Upper Double" << endl;
        }
        else if (n < 31)
        {
            cout << "Upper Single" << endl;
        }
    }
    return 0;
}
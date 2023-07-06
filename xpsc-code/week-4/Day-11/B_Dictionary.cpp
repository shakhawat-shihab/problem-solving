#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        char a, b;
        cin >> a >> b;
        if (a == 'a')
        {
            cout << a - 'a' + b - 'a' << '\n';
        }
        else if ((a - 'a') > (b - 'a'))
        {
            int add = (25 * (a - 'a')) + (b - 'a') + 1;
            cout << add << '\n';
        }
        else
        {
            int add = (25 * (a - 'a')) + (b - 'a');
            cout << add << '\n';
        }
    }
    return 0;
}
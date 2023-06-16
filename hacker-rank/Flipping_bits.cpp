#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        cin >> n;
        unsigned int p = pow(2, 32) - 1;
        cout << (n ^ p) << endl;
    }

    return 0;
}
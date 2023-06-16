#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sm = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sm ^= x;
    }
    cout << sm << endl;
    return 0;
}
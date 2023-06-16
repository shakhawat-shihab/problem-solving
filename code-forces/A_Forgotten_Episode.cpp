#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vc(n + 1, 1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vc[x]--;
    }
    for (int i = 1; i <= n; i++)
    {
        if (vc[i] == 1)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
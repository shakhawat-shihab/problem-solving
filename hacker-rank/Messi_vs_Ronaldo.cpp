#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int t;
    // cin >> t;
    // 	while(t--){
    int mg, ma;
    int rg, ra;
    cin >> mg >> ma >> rg >> ra;
    int m = mg * 2 + ma;
    int r = rg * 2 + ra;
    if (m > r)
    {
        cout << "Messi" << endl;
    }
    else if (m < r)
    {
        cout << "Ronaldo" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }
    // 	}
    return 0;
}

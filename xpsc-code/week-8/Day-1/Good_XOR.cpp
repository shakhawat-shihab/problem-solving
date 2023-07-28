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
        int arr[n];
        int z = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
                o++;
            else
                z++;
        }
        if (n % 2)
        {
            cout << -1 << endl;
        }
        else
        {
            if (o && z)
            {
                if (z > o)
                {
                    int diff = z - o;
                    cout << diff / 2 << endl;
                }
                else
                {
                    int diff = n / 2 - z;
                    // cout << "d " << diff << endl;
                    int xtra = 0;
                    if (diff % 2)
                    {
                        xtra = 2;
                    }
                    cout << diff / 2 + xtra << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
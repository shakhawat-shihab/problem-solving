#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n, i, db;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int f = 0;
        auto it = mp.rbegin();
        while (it != mp.rend())
        {
            if (it->second % 2)
            {
                f = 1;
                break;
            }
            it++;
        }

        if (f == 1)
        {
            cout << "Marichka" << endl;
        }
        else
        {
            cout << "Zenyk" << endl;
        }
    }
    return 0;
}

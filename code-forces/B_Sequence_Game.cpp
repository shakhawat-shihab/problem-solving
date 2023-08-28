#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define mii map<int, int>
#define pii pair<int, int>
#define pll pair<ll, ll>
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> vc;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                vc.push_back(arr[i]);
            }
            else
            {
                if (arr[i] < arr[i - 1])
                {
                    vc.push_back(arr[i]);
                }
                vc.push_back(arr[i]);
            }
        }

        cout << vc.size() << endl;
        for (auto val : vc)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
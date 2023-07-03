#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {
        int n;
        cin >> n;
        arr.clear();
        vector<int> e;
        vector<int> o;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                e.push_back(x);
            else
                o.push_back(x);
        }

        sort(e.begin(), e.end(), greater<>());
        sort(o.begin(), o.end(), greater<>());

        if (o.size() == 0)
        {
            cout << "Alice" << endl;
        }
        if (e.size() == 0 && o.size() == 1)
        {
            cout << "Tie" << endl;
        }
        if (e.size() == 0 && o.size() > 1)
        {
            cout << "Bob" << endl;
        }
    }
    return 0;
}
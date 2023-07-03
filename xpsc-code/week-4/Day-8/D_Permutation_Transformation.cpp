#include <bits/stdc++.h>
using namespace std;
vector<int> arr, level(105, -1);
int n;

void call(int l, int r, int d)
{
    // cout << l << " " << r << endl;
    int mx = 0;
    int in = 0;
    for (int i = l; i <= r; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            in = i;
        }
    }
    level[in] = d;
    // cout << "index -- " << in << endl;
    if (in != l)
        call(l, in - 1, d + 1);
    if (in != r)
        call(in + 1, r, d + 1);
}

int main()
{
    int t;
    cin >> t;
    for (int Case = 1; Case <= t; Case++)
    {

        cin >> n;
        arr.clear();
        level.clear();
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        call(0, n - 1, 0);

        for (int i = 0; i < n; i++)
            cout << level[i] << " ";
        cout << endl;
    }
    return 0;
}
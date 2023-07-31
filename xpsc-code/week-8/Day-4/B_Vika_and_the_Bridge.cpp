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
        int n, k;
        cin >> n >> k;
        int arr[n];
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vp[i] = {x, i + 1};
        }
        sort(vp.begin(), vp.end());
        int prvsColor = -1, prvsPos = -1;
        int largest = INT_MIN, second = INT_MIN;
        int mn = INT_MAX;
        for (auto val : vp)
        {
            // cout << val.first << " " << val.second << endl;
            int color = val.first;
            int pos = val.second;
            int jump;
            if (prvsColor != color)
            {
                if (prvsPos != -1)
                {
                    jump = n - prvsPos;
                    // cout << "jumpLast " << jump << endl;
                    prvsPos = -1;

                    if (jump >= largest)
                    {
                        second = largest;
                        largest = jump;
                    }
                    else if (jump > second && jump != largest)
                    {
                        second = jump;
                    }
                    // cout << second << " " << largest << endl;
                    mn = min(mn, max(second, largest / 2));
                    largest = INT_MIN;
                    second = INT_MIN;
                    // cout << "mn " << mn << endl;
                }
            }
            else
            {
                jump = pos - prvsPos - 1;
                prvsPos = pos;
                prvsColor = color;
                // cout << "jumpSame " << jump << endl;
                if (jump >= largest)
                {
                    second = largest;
                    largest = jump;
                }
                else if (jump > second && jump != largest)
                {
                    second = jump;
                }
            }

            if (prvsColor != color)
            {

                if (prvsPos == -1)
                {
                    jump = pos - 1;
                    // cout << "jumpNew " << jump << endl;
                    prvsPos = pos;
                    prvsColor = color;

                    if (jump > largest)
                    {
                        second = largest;
                        largest = jump;
                    }
                    else if (jump > second && jump != largest)
                    {
                        second = jump;
                    }
                }
            }
        }
        int jump = n - prvsPos;

        if (jump >= largest)
        {
            second = largest;
            largest = jump;
        }
        else if (jump > second && jump != largest)
        {
            second = jump;
        }

        mn = min(mn, max(second, largest / 2));

        cout << mn << endl;
    }
    return 0;
}
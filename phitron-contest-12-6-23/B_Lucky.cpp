#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s = to_string(n);
        // cout << s << endl;

        int cnt = 6 - s.length();
        int firstSum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (cnt >= 3)
                break;
            int val = s[i] - '0';
            firstSum += val;
            cnt++;
            // cout << s[i] << val << endl;
        }

        cnt = 0;
        int lastSum = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (cnt >= 3)
                break;
            int val = s[i] - '0';
            lastSum += val;
            cnt++;
        }

        if (firstSum == lastSum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
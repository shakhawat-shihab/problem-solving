#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin >> y;
    for (int i = y + 1;; i++)
    {
        unordered_map<int, int> mp;
        int n = i;
        int flag = 0;
        while (n)
        {
            int digit = n % 10;
            if (mp[digit])
            {
                flag = 1;
                break;
            }
            mp[digit]++;
            n = n / 10;
        }
        if (flag == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
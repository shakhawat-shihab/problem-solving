#include <bits/stdc++.h>
using namespace std;

vector<int> palList;
void markPalindrome()
{
    for (int i = 0; i <= 32768; i++)
    {
        string s = to_string(i);
        int flag = 1;
        for (int j = 0; j < s.length() / 2; j++)
        {
            if (s[j] != s[s.length() - 1 - j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            palList.push_back(i);
    }
}

int main()
{
    int t;
    cin >> t;
    markPalindrome();
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            nums.push_back(x);
        }

        long long cnt = n;
        for (int i = 0; i < n; i++)
        {
            for (auto val : palList)
            {
                int ans = nums[i] ^ val;
                if (mp[ans] > 0)
                {
                    cnt = cnt + mp[ans];
                }
            }
        }

        cout << cnt / 2 << endl;
    }
    return 0;
}
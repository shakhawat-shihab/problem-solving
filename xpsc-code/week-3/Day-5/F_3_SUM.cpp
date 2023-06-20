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
        vector<int> vc;
        unordered_map<int, int> digit;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int n = s[s.length() - 1] - '0';
            digit[n]++;
            if (digit[n] <= 3)
                vc.push_back(n);
        }

        // for (int i = 0; i < vc.size(); i++)
        // {
        //     cout << vc[i] << " ";
        // }
        // cout << endl;

        int flag = 0;

        for (int i = 0; i < vc.size() - 2; i++)
        {
            for (int j = i + 1; j < vc.size() - 1; j++)
            {
                for (int k = j + 1; k < vc.size(); k++)
                {
                    // cout << vc[i] << vc[j] << vc[k] << " ==> " << vc[i] + vc[j] + vc[k] << endl;
                    if ((vc[i] + vc[j] + vc[k]) % 10 == 3)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
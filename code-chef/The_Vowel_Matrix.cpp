#include <bits/stdc++.h>
using namespace std;
const int md = 1e9 + 7;

bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }
    return false;
}

int main()

{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        long long vowel = 0;

        long long ans = 1;
        vowel = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (isVowel(s[i]))
            {
                vowel++;
            }
            if (vowel == k)
            {
                long long k = i + 1;
                while (k < n && isVowel(s[k]) == false)
                {
                    k++;
                }
                // cout << k << " ff " << i << endl;
                if (k < n)
                    ans = (ans * (k - i)) % md;
                i = k - 1;
                vowel = 0;
                // cout << i << endl;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
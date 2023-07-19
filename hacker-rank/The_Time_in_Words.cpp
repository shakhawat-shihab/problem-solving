#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, m;
    cin >> h >> m;
    int nxt = 0;
    if (m > 30)
    {
        h++;
        m = 60 - m;
        nxt = 1;
    }

    string one[] = {"", "one ", "two ", "three ", "four ",
                    "five ", "six ", "seven ", "eight ",
                    "nine ", "ten ", "eleven ", "twelve ",
                    "thirteen ", "fourteen ", "fifteen ",
                    "sixteen ", "seventeen ", "eighteen ",
                    "nineteen "};

    string ans = "";
    if (m == 0)
    {
        ans += one[h] + "o' clock";
    }
    else
    {
        if (m == 15)
            ans += "quarter";
        else if (m == 30)
            ans += "half";
        else
        {
            if (m == 1)
            {
                ans += one[m] + "minute";
            }
            else if (m < 20)
            {
                ans += one[m] + "minutes";
            }
            else
            {
                ans += "twenty " + one[m - 20] + "minutes";
            }
        }
        if (nxt == 1)
        {
            ans += " to ";
        }
        else
        {
            ans += " past ";
        }
        ans += one[h];
    }
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int cnt = 1;
void getDigit(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    // cout << "sum " << sum << endl;
    if (sum > 9)
    {
        cnt++;
        getDigit(to_string(sum));
    }
    return;
}

int main()
{
    string s;
    cin >> s;
    if (s.length() == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    getDigit(s);
    cout << cnt << endl;
    return 0;
}
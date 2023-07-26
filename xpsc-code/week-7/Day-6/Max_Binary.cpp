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
        string s;
        cin >> s;
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='0'){
        //     }
        // }
        if (s[0] == '0')
        {
            s[0] = '1';
            k--;
        }
        while (k--)
        {
            s += '0';
        }
        cout << s << endl;
    }
    return 0;
}
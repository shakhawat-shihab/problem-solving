#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    try
    {
        int n = stoi(s);
        cout << s << endl;
    }
    catch (...)
    {
        cout << "Bad String" << endl;
    }

    return 0;
}
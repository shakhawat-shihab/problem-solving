#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i = 4;
    double d = 4.0;
    string st = "HackerRank ";

    int n;
    cin >> n;
    double m;
    cin >> m;
    getchar();
    string s;
    getline(cin, s);
    cout << (int)i + n << endl;
    std::cout << std::fixed << std::setprecision(1) << d + m << endl;
    string ans = st + s;
    cout << ans << endl;
    return 0;
}

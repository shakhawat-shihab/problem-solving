/*
~~~~~~~~~~~~~~~~~
Shakhawat Hossain
~~~~~~~~~~~~~~~~~
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2)
            odd++;
        else
            even++;
    }
    if (odd <= even)
    {
        cout << odd << endl;
    }
    else
    {
        cout << even << endl;
    }

    return 0;
}
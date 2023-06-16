#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    int arr[n];
    int mnOdd = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] % 2 == 1)
        {
            mnOdd = min(arr[i], mnOdd);
        }
    }
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        // sort(arr,arr+n);
        // if(arr[i]%2){
        cout << sum - mnOdd << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int k = 0; k < i / 2; k++)
            {
                // swap(arr[k], arr[i - k - 1]);
                arr[k] = arr[k] ^ arr[i - k - 1];
                arr[i - k - 1] = arr[k] ^ arr[i - k - 1];
                arr[k] = arr[k] ^ arr[i - k - 1];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
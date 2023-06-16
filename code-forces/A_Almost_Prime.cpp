#include <bits/stdc++.h>
using namespace std;
const int N = 3001;
int arr[N];

void ceive()
{
    arr[1] = 1;
    for (int i = 2; i < sqrt(N); i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + i; j <= N; j += i)
            {
                arr[j] = 1;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    ceive();
    // primes
    // for (int i = 1; i < N; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                int div = i / j;
                if (j != div)
                {
                    if (arr[j] == 0)
                    {
                        cnt++;
                    }
                    if (arr[div] == 0)
                    {
                        cnt++;
                    }
                }
                else
                {
                    if (arr[j] == 0)
                    {
                        cnt++;
                    }
                }
            }
        }
        if (cnt == 2)
        {
            // cout << i << endl;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
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
        int n, d, h;
        cin >> n >> d >> h;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        std::cout << std::fixed;
        std::cout << std::setprecision(6);
        double rate = (double)d / h;
        double area = 0;
        int prvs;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1 || prvs >= arr[i] + h)
            {
                area += 0.5 * d * h;
                prvs = arr[i];
                // cout << "tr" << endl;
            }
            else if (prvs < arr[i] + h)
            {
                int peakCrnt = arr[i] + h;
                double a = (double)rate * (peakCrnt - prvs);
                // cout << a << endl;
                area += 0.5 * (a + d) * (prvs - arr[i]);
                prvs = arr[i];
                // cout << "tp" << endl;
            }
            // cout << area << endl;
        }
        cout << area << endl;
    }
    return 0;
}
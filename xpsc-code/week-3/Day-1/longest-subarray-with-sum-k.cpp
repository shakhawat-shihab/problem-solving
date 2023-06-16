// https : // www.codingninjas.com/codestudio/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here
    int i = 0, j = 0;
    int n = a.size();
    int mx = 0;
    long long sum = 0;
    while (j < n)
    {
        sum += a[j];
        // cout<<sum<<endl;
        if (sum < k)
        {
            j++;
        }
        else if (sum == k)
        {
            mx = max(mx, j - i + 1);
            j++;
        }
        else if (sum > k)
        {
            while (sum > k)
            {
                sum = sum - a[i];
                i++;
            }
            if (sum == k)
            {
                mx = max(mx, j - i + 1);
            }
            j++;
        }
    }
    return mx;
}

int main()
{
    // code

    int n;
    cin >> n;
    vector<int> vc(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    int k;
    cin >> k;
    cout << longestSubarrayWithSumK(vc, k) << endl;
    return 0;
}
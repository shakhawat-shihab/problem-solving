#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int bubbleSort(vector<int> &vc)
{
    int cnt = 0;
    int n = vc.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vc[j] > vc[j + 1])
            {
                swap(vc[j], vc[j + 1]);
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    int cnt = bubbleSort(vc);
    cout << "Array is sorted in " << cnt << " swaps.\n";
    cout << "First Element: " << vc[0] << "\n";
    cout << "Last Element: " << vc[n - 1] << "\n";
    return 0;
}
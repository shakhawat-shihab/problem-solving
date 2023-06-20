#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<vector<long long>> vc(N, vector<long long>(N, 0));
        vector<vector<long long>> prefixSum(N, vector<long long>(N, 0));

        for (int i = 0; i < n; i++)
        {
            int r, c;
            cin >> r >> c;
            vc[r][c] += r * c;
        }

        // 2d prefix sum array
        for (int i = 1; i < N; i++)
        {
            for (int j = 1; j < N; j++)
            {
                prefixSum[i][j] = vc[i][j] + prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1];
            }
        }

        while (q--)
        {
            int h1, w1, h2, w2;
            cin >> h1 >> w1 >> h2 >> w2;

            if (h2 - h1 == 0 || w2 - w1 == 0)
            {
                cout << 0 << endl;
                continue;
            }

            long long ans = prefixSum[h2 - 1][w2 - 1] - prefixSum[h2 - 1][w1] - prefixSum[h1][w2 - 1] + prefixSum[h1][w1];
            cout << ans << endl;
        }
    }
    return 0;
}
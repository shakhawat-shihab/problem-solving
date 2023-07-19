#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int magic_arr[3][3];
int flatten_arr[9];

int magic_squares[8][9] = {
    {8, 1, 6, 3, 5, 7, 4, 9, 2},
    {4, 3, 8, 9, 5, 1, 2, 7, 6},
    {2, 9, 4, 7, 5, 3, 6, 1, 8},
    {6, 7, 2, 1, 5, 9, 8, 3, 4},
    {6, 1, 8, 7, 5, 3, 2, 9, 4},
    {8, 3, 4, 1, 5, 9, 6, 7, 2},
    {4, 9, 2, 3, 5, 7, 8, 1, 6},
    {2, 7, 6, 9, 5, 1, 4, 3, 8}};

void createMagicSquare(int n)
{

    int r = n / 2;
    int c = n - 1;
    for (int i = 1; i <= n * n;)
    {
        if (r == -1 && c == n)
        {
            c = n - 2;
            r = 0;
        }
        else
        {
            if (r < 0)
            {
                r = n - 1;
            }
            if (c == n)
            {
                c = 0;
            }
        }
        if (magic_arr[r][c] != 0)
        {
            c = c - 2;
            r = r + 1;
            continue;
        }

        magic_arr[r][c] = i++;
        r = r - 1;
        c = c + 1;
    }

    for (int i = 0, pos = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << magic_arr[i][j] << " ";
            flatten_arr[pos] = magic_arr[i][j];
            pos++;
        }
        // cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[3][3];
    int flatten_input[9];
    for (int i = 0, pos = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            flatten_input[pos] = arr[i][j];
            pos++;
        }
    }

    createMagicSquare(3);

    int mn = INT_MAX;
    for (int i = 0; i < 8; i++)
    {
        int crnt = 0;
        for (int j = 0; j < 9; j++)
        {
            crnt += abs(magic_squares[i][j] - flatten_input[j]);
        }
        mn = min(mn, crnt);
    }
    cout << mn << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define maxn 100

int n;
int matriz[maxn][maxn];
int mins[maxn][maxn];
int soma[maxn][maxn];

int somas(int l, int c)
{
    int x = 0;
    for (int i = 0; i <= l; i++)
    {
        x += matriz[l][c + i];
    }
    return x;
}

void solve(int l, int c)
{
    if (soma[l][c] == -1)
        soma[l][c] = somas(l, c);

    if (l == n - 1)
    {
        mins[l][c] = somas(l, c);
        return;
    }

    if (c == n - l - 1)
    {
        if (mins[l + 1][c - 1] == -1)
        {
            solve(l + 1, c - 1);
        }
        mins[l][c] = mins[l + 1][c - 1] + soma[l][c];
    }
    else if (c >= 1)
    {
        if (mins[l + 1][c] == -1)
        {
            solve(l + 1, c);
        }
        if (mins[l + 1][c + 1] == -1)
        {
            solve(l + 1, c + 1);
        }
        mins[l][c] = min(mins[l + 1][c], mins[l + 1][c - 1]) + soma[l][c];
    }
    else
    {
        if (mins[l + 1][c] == -1)
        {
            solve(l + 1, c);
        }
        mins[l][c] = mins[l + 1][c] + soma[l][c];
    }
}

int main()
{
    cin >> n;

    memset(mins, -1, sizeof(mins));
    memset(soma, -1, sizeof(soma));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> matriz[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        solve(0, i);
    }

    int x = mins[0][0];

    for (int i = 0; i < n; i++)
    {
        x = min(x, mins[0][i]);
    }

    cout << x << endl;
}
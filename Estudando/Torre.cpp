#include <bits/stdc++.h>
#define maxn 1002

using namespace std;

int n;
int mat[maxn][6];
int maxi[maxn][6];
int ans = 0;

void solve(int i, int j)
{
    int k;
    switch (j)
    {
    case 0:
        k = 5;
        break;
    case 1:
        k = 3;
        break;
    case 2:
        k = 4;
        break;
    case 3:
        k = 1;
        break;
    case 4:
        k = 2;
        break;
    case 5:
        k = 0;
        break;
    }
    int index = 0;
    for (int z = 0; z < 6; z++)
    {
        if (mat[i + 1][z] == k)
            index = z;
    }
    if (maxi[i + 1][index] == -1)
    {
        solve(i + 1, index);
    }
    if (mat[i][j] != 6 && mat[i][k] != 6)
    {
        maxi[i][j] = 6 + maxi[i + 1][index];
        return;
    }
    if (mat[i][j] != 5 && mat[i][k] != 5)
    {
        maxi[i][j] = 5 + maxi[i + 1][index];
        return;
    }
    maxi[i][j] = 4 + maxi[i + 1][index];
    return;
}

int main()
{
    memset(maxi, -1, 6 * maxn);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < 6; i++)
    {
        mat[n][i] = 0;
    }

    for (int i = 0; i < 6; i++)
    {
        solve(0, i);
    }

    for (int i = 0; i < 6; i++)
    {
        if (maxi[0][i] > ans)
            ans = maxi[0][i];
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << maxi[i][j] << " ";
        }
        cout << endl;
    }
    cout << ans << endl;
}
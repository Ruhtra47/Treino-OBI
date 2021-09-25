#include <bits/stdc++.h>
using namespace std;

#define maxn 1000

int n, m, res = 0;
int mat[maxn][maxn];
bool vis[maxn][maxn];

int va[4] = {1, 0, -1, 0};
int vb[4] = {0, 1, 0, -1};

void solve(int i, int j)
{
    int a, b, newa, newb;
    queue<pair<int, int>> fila;
    fila.push(make_pair(i, j));
    vis[i][j] = true;

    while (!fila.empty())
    {
        a = fila.front().first;
        b = fila.front().second;
        fila.pop();
        for (int k = 0; k < 4; k++)
        {
            newa = a + va[k];
            newb = b + vb[k];

            if (!vis[newa][newb] && mat[newa][newb] == 1)
            {
                vis[newa][newb] = true;
                fila.push(make_pair(newa, newb));
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && mat[i][j] == 1)
            {
                res++;
                solve(i, j);
            }
        }
    }

    cout << res << endl;
}
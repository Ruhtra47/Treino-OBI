#include <bits/stdc++.h>
using namespace std;

#define maxn 500

int n, m;
int bairro[maxn][maxn];

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> bairro[i][j];
        }
    }

    int menor = 5e4 + 10;
    for (int i = 0; i < m; i++)
    {
        int coluna = 0;

        for (int j = 0; j < n; j++)
        {
            coluna += bairro[j][i];
        }

        if (coluna < menor)
            menor = coluna;
    }

    cout << menor << endl;
}
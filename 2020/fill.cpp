#include <iostream>
#include <string>
using namespace std;

#define maxn 500

int n, f;
int matriz[maxn][maxn];
bool marcados[maxn][maxn];

void fill(int x, int y)
{
    cout << x << ' ' << y;

    if (marcados[x][y])
    {
        return;
    }

    marcados[x][y] = true;

    if (matriz[x][y] <= f)
    {
        matriz[x][y] = '*';
    }
    else
    {
        return;
    }

    if (x - 1 >= 0)
    {
        fill(x - 1, y);
    }
    if (x + 1 < n)
    {
        fill(x + 1, y);
    }
    if (y - 1 >= 0)
    {
        fill(x, y - 1);
    }
    if (y + 1 < n)
    {
        fill(x, y + 1);
    }
}

int main()
{
    cin >> n >> f;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string linha;
            cin >> linha;

            cout << endl
                 << linha << endl;

            for (int l = 0; l <= linha.length(); l++)
            {
                matriz[i][j] = linha[l] - '0';
            }
        }
    }

    fill(0, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] == '*')
            {
                cout << '*';
            }
            else
            {
                cout << matriz[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
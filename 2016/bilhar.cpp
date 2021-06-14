#include <bits/stdc++.h>
using namespace std;

#define maxn 1000000

int c, pedido, estoque[maxn], res = 0;

int main()
{
    memset(estoque, 0, sizeof(estoque));
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        cin >> pedido;

        if (estoque[pedido] > 0)
        {
            estoque[pedido]--;
        }
        else
        {
            res += 2;
            estoque[pedido]++;
        }
    }

    cout << res << endl;
}
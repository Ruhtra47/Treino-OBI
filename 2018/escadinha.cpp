#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int diferenca, diferenca_anterior, valor_anterior, res = 0, seq;

    for (int i = 0; i < n; i++)
    {
        cin >> seq;

        if (i == 0)
        {
            res++;
        }
        else if (i == 1)
        {
            diferenca = seq - valor_anterior;
            diferenca_anterior = diferenca;
        }
        else
        {
            diferenca = seq - valor_anterior;

            if (diferenca != diferenca_anterior)
            {
                res++;
            }

            diferenca_anterior = diferenca;
        }

        valor_anterior = seq;
    }

    cout << res << endl;
    return 0;
}
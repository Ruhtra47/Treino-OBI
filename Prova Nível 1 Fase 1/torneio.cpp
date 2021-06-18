#include <bits/stdc++.h>
using namespace std;

int main()
{
    int res = 0;
    for (int i = 0; i < 6; i++)
    {
        char partida;
        cin >> partida;

        if (partida == 'V')
        {
            res++;
        }
    }

    if (res >= 5)
    {
        cout << 1 << endl;
    }
    else if (res >= 3)
    {
        cout << 2 << endl;
    }
    else if (res >= 1)
    {
        cout << 3 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
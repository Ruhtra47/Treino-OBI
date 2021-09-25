#include <bits/stdc++.h>
using namespace std;

int k, R, res = 0;

void solve(int num, int resto, int c)
{
    int novonum = num - 1;
    int novoresto;

    for (int i = c; i < R; i++)
    {
        novoresto = resto - i;

        if (novonum == 0)
        {
            if (novoresto == 0)
            {
                res++;
            }
            return;
        }

        if (novoresto > 0)
        {
            solve(novonum, novoresto, i + 1);
        }
    }
}

int main()
{
    cin >> R >> k;

    for (int i = 1; i < R; i++)
    {
        solve(k - 1, R - i, i + 1);
    }

    cout << res << endl;
}
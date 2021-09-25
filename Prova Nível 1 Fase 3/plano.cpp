#include <bits/stdc++.h>
using namespace std;

#define maxn 100000

int n, m, res = 0;
priority_queue<int> fila;
vector<int> vagas;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        fila.push(x);
    }

    for (int i = 0; i <= n; i++)
    {
        vagas.push_back(1);
    }

    while (!fila.empty())
    {
        int client = fila.top();
        fila.pop();

        if (vagas[client] == 0)
        {
            for (int i = client; i > 0; i--)
            {
                if (vagas[i] == 1)
                {
                    vagas[i] = 0;
                    res++;
                    continue;
                }
            }
            break;
        }
        else
        {
            vagas[client] = 0;
        }
    }

    cout << res << endl;
}
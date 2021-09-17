#include <bits/stdc++.h>
using namespace std;

const int maxn = 110, maxp = 1e5 + 10;

int n, capacidade, valores[maxn], pesos[maxn];
int optimal[maxn][maxp];
bool visitados[maxn][maxp];

int solve(int index, int peso)
{
    if (index == n + 1)
        return 0;
    if (visitados[index][peso])
        return optimal[index][peso];
    visitados[index][peso] = true;

    optimal[index][peso] = solve(index + 1, peso);

    if (peso >= pesos[index])
    {
        optimal[index][peso] = max(optimal[index][peso], solve(index + 1, peso - pesos[index]) + valores[index]);
    }

    return optimal[index][peso];
}

int main()
{
    cin >> n >> capacidade;

    for (int i = 1; i <= n; i++)
    {
        cin >> pesos[i] >> valores[i];
    }

    cout << solve(1, capacidade) << endl;
}
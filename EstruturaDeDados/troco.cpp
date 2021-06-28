#include <bits/stdc++.h>
using namespace std;

char resposta = 'N';
int v, m, moeda[1010];
bool calculados[1010][100010];

void solve(int coin, int soma) {
    if (calculados[coin][soma]) return;

    calculados[coin][soma] = true;

    if (soma == v) {
        resposta = 'S';
        return;
    }

    if (coin > m || soma > v) return;

    solve(coin + 1, soma + moeda[coin]);
    solve(coin + 1, soma);
}

int main() {
    cin >> v >> m;

    for (int i = 1; i <= m; i++) cin >> moeda[i];

    solve(1, 0);

    cout << resposta << endl;
}
#include <bits/stdc++.h>
using namespace std;

#define maxs 200

int s, t, p;
int alturas[maxs];
vector<pair<int, int>> ligacoes;

int solve(int pos) {
    
}

int main() {
    cin >> s >> t >> p;

    for (int i = 0; i < s; i++) {
        cin >> alturas[i];
    }

    for (int i = 0; i < t; i++) {
        int origem, destino;
        cin >> origem >> destino;

        ligacoes.push_back(make_pair(origem, destino));
    }

    solve(p);
}
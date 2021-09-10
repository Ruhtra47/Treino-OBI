#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string numeros[n];

    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int resultados[n];
    for (int i = 0; i < n; i++) {
        char last = numeros[i].back();
        numeros[i].pop_back();
        string numero = numeros[i];

        char ns[n];
        for (int i = 0; i < numero.length(); i++) {
            ns[i] = numero[i];
        }

        int base = atoi(ns);
        int expoente = last - '0';

        if (expoente == 0) {
            resultados[i] = 1;
            continue;
        }
        
        resultados[i] = pow(base, expoente);
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        res += resultados[i];
    }

    cout << res << endl;
}
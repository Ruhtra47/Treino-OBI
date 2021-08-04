#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, c;
    cin >> l >> c;

    int matriz[l][c];
    int controle[l][c];

    memset(controle, -1, sizeof(controle));

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 2; i < c; i++) {
        for (int j = 2; j < l; j++) {
            if (matriz[1][1] + matriz[i][j] <= matriz[1][j] + matriz[i][1]) {
                controle[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < l - 1; i++) {
        for (int j = 0; j < c - 1; j++) {
            int subm[2][2] {matriz[i][j], matriz[i][j + 1], matriz[i + 1][j], matriz[i + 1][j + 1]};

            if (subm[1][1] + subm[i][j] <= subm[1][j] + subm[i][1]) {
                controle[i][j] = 1;
            }
        }
    }

    int res = 0;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (controle[i][j] == 1) {
                res++;
            }
        }
    }

    cout << res << endl;
}
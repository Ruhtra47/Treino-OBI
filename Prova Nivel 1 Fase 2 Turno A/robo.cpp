// NOTA 100
#include <iostream>
using namespace std;

int n, c, s;

int main() {
    cin >> n >> c >> s;

    int comandos[c];

    for (int i = 0; i < c; i++) {
        cin >> comandos[i];
    }

    int pos = 1;
    int res = 0;
    for (int i = 0; i < c; i++) {
        if (pos == s) {
            res++;
        }
        
        pos += comandos[i];

        if (pos > n) {
            pos = 1;
        }

        if (pos < 1) {
            pos = n;
        }
    }
    if (pos == s) {
        res++;
    }

    cout << res << endl;
}
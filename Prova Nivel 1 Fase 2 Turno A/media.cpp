#include <iostream>
using namespace std;

int a, b, c = 0;

int meio() {
    if (a > b && a < c || a < b && a > c) {
        return a;
    } else if (b > a && b < c || b < a && b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    cin >> a >> b;

    int media = (a + b + c)/3;
    int mediana = meio();
    while (true) {
        if (media == mediana) {
            cout << c << endl;
            break;
        }
        c++;
    }
}
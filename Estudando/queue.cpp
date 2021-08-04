#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> fila;

    fila.push(1);
    fila.push(3);
    fila.push(4);
    fila.push(9);

    while (!fila.empty()) {
        cout << fila.front() << " " << fila.size() << endl;
        fila.pop();
    }

    return 0;
}
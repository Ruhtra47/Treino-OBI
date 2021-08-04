#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> fila1;

    fila1.push(4);
    fila1.push(3);

    cout << fila1.top() << endl;

    fila1.pop();

    cout << fila1.top() << endl;

    priority_queue<int, vector<int>, greater<int>> fila2;

    fila2.push(3);
    fila2.push(4);

    cout << fila2.top() << endl;

    priority_queue<double, vector<double>, greater<double>> fila3;

    fila3.push(5.2);
    fila3.push(3.14);

    cout << fila3.top() << endl;

}
#include <iostream>
using namespace std;

int main() {
    int r, m, l;

    cin >> r >> m >> l;

    if (r < m) {
        cout << "RM" << endl;
    } else {
        cout << "*" << endl;
    }

    if (r < l) {
        cout << "RO" << endl;
    } else {
        cout << "*" << endl;
    }
}
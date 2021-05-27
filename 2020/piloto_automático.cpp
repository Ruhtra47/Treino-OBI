#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (b - a < c - b)
        cout << 1 << endl;
    else if (b - a > c - b)
        cout << -1 << endl;
    else
        cout << 0 << endl;
}
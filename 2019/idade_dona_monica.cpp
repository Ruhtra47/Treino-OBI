#include <iostream>
using namespace std;

int main()
{
    int m, a, b;
    cin >> m;
    cin >> a;
    cin >> b;

    int c = m - (a + b);

    if (a > b && a > c)
    {
        cout << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

const int infinito = 1e9 + 10;

int main()
{
    int n;
    cin >> n;

    int maior = -infinito;
    int res = -infinito;

    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;

        res = max(res, h + i + maior);

        maior = max(maior, h - i);
    }

    cout << res << endl;
}
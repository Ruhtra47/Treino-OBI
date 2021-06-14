#include <bits/stdc++.h>
using namespace std;

// 1 = branco
// 0 = preto

int main()
{
    int l, c;
    cin >> l >> c;

    if (l == c)
    {
        cout << 1 << endl;
    }
    else if (l % 2 == 0 && c % 2 == 0)
    {
        cout << 1 << endl;
    }
    else if (l % 2 != 0 && c % 2 != 0)
    {
        cout << 1 << endl;
    }
    else if (l % 2 != 0 && c % 2 != 0)
    {
        cout << 0 << endl;
    }
    else if (l % 2 != 0 || c % 2 != 0)
    {
        cout << 0 << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int l, c;

int main()
{
    cin >> l >> c;

    int grande = (l * c) + (c - 1) * (l - 1);
    int pequeno = (l - 1) * 2 + (c - 1) * 2;

    cout << grande << endl
         << pequeno << endl;
}
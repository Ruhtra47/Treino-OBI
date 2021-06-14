#include <bits/stdc++.h>
using namespace std;

int main()
{
    int u, a, b, c, d, e, f, g;

    cin >> u;
    cin >> a >> b >> c >> d >> e >> f >> g;

    if (u + d + e + f - a - b - c - g != 0)
        cout << "S" << endl;
    else
        cout << "N" << endl;
}
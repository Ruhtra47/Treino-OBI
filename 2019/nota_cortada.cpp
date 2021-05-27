#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, t, area_total = 160 * 70;
    cin >> b;
    cin >> t;

    int area_corte = ((b + t) * 70) / 2;

    if (area_corte > area_total / 2)
        cout << 1 << endl;
    else if (area_corte < area_total / 2)
        cout << 2 << endl;
    else
        cout << 0 << endl;

    return 0;
}
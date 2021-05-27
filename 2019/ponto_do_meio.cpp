#include <bits/stdc++.h>
using namespace std;

long resolver(int x)
{
    if (x == 0)
        return 2;
    return 2 * resolver(x - 1) - 1;
}

int main()
{
    int n;
    cin >> n;

    long resposta = resolver(n);

    cout << resposta * resposta << endl;
}
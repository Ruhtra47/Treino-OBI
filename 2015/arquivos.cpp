#include <bits/stdc++.h>
using namespace std;

#define maxn 100001

int n, b, resp, files[maxn];

int main()
{
    cin >> n >> b;

    for (int i = 1; i <= n; i++)
    {
        cin >> files[i];
    }

    sort(files + 1, files + n + 1);

    int menor = 1;

    for (int maior = n; maior >= menor; maior--)
    {
        resp++;

        if (files[menor] + files[maior] <= b)
            menor++;
    }

    cout << resp << endl;
}
#include <bits/stdc++.h>
using namespace std;

#define maxs 5500
#define maxn 10

int s, notas[maxn], valor[maxn] = {0, 2, 5, 10, 20, 50, 100, 0, 0, 0};
long long int dp[maxs][maxn];

long long int solve(int resto, int tipo = 1)
{
    if (resto == 0)
        return 1LL;

    if (tipo > 6 || resto < 0)
        return 0LL;

    if (dp[resto][tipo] != -1)
        return dp[resto][tipo];

    long long int total = 0LL;

    for (int i = 0; i <= notas[tipo]; i++)
    {
        if (resto < i * valor[tipo])
            break;

        total += solve(resto - i * valor[tipo], tipo + 1);
    }

    return dp[resto][tipo] = total;
}

int main()
{
    cin >> s;

    for (int i = 1; i < 7; i++)
    {
        cin >> notas[i];
    }

    memset(dp, -1, sizeof(dp));

    cout << solve(s) << endl;
}
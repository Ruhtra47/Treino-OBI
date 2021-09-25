#include <bits/stdc++.h>
using namespace std;
#define maxn 100000

int v[maxn];
int n, m;
int ans = 0;
int val[maxn];

int mdcval(int a, int b)
{
    int resto, num1, num2;
    num1 = max(a, b);
    num2 = min(a, b);
    while (resto != 0)
    {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }
    return num1;
}

int mdc(int i, int j)
{
    cout << "           " << val[i] << "  " << v[j];
    val[i] = mdcval(val[i], v[j]);
    cout << "   " << val[i] << endl;
    return val[i];
}

int main()
{
    memset(val, -1, sizeof(val));
    cin >> n >> m;
    int tipo, s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> tipo >> s1 >> s2;
        if (tipo == 1)
        {
            v[s1 - 1] = s2;
        }
        if (tipo == 2)
        {
            ans = 0;
            for (int i = 0; i < n; i++)
            {
                val[i] = v[i];
            }
            for (int i = 0; i <= s2 - s1; i++)
            {
                for (int j = s1 - 1; j < s2 - i; j++)
                {
                    cout << j << ", " << j + i;
                    if (mdc(j, j + i) != 1)
                        ans++;
                    cout << "   " << ans << endl;
                }
            }
            cout << ans << endl;
        }
    }
}
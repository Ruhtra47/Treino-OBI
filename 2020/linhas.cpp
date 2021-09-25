#include <bits/stdc++.h>
using namespace std;

#define maxt 500

int t, l, o, d, ans = INT_MAX;
int mat[maxt][maxt];
bool vis[maxt][maxt];

void solve(int ori, int dest, int resp)
{
    cout << "Entrou no solve" << endl;
    if (vis[ori][dest])
    {
        cout << "Vis if" << endl;
        return;
    }

    if (ori > l)
    {
        return;
    }

    cout << "Passou do if" << endl;

    for (int k = 0; k < l; k++)
    {
        cout << "Entrou no for do K" << endl;
        for (int j = 0; j < l; j++)
        {
            cout << "Entrou no for do j" << endl;
            if (mat[k][j] == -1)
            {
                cout << "Break if" << endl;
                break;
            }

            if (mat[k][j] == dest)
            {
                cout << "dest if" << endl;

                if (ans > resp)
                {
                    cout << "ans if" << endl;
                    ans = resp;
                }
                return;
            }
            solve(mat[k][j], dest, resp + 1);
        }
    }
    vis[ori][dest] = true;
}

int main()
{
    memset(mat, -1, sizeof(mat));
    memset(vis, false, sizeof(vis));

    cin >> t >> l >> o >> d;

    for (int i = 0; i < l; i++)
    {
        int c;
        cin >> c;

        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Fim do input" << endl;

    solve(o, d, INT_MAX);

    cout << ans << endl;
}
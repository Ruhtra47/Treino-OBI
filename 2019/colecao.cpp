#include <bits/stdc++.h>
using namespace std;

#define maxn 100000

vector<int> upanaocombina[maxn];
bool vis[maxn];
int n, m, res = 0;

int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        upanaocombina[u].push_back(v);
        upanaocombina[v].push_back(u);
    }

    for (int i = n; i > 0; i--)
    {
        if (!vis[i])
        {
            res++;
            for (int j = 0; j < upanaocombina[i].size(); j++)
            {
                int upa = upanaocombina[i][j];
                vis[upa] = true;
            }
        }
    }

    cout << res << endl;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
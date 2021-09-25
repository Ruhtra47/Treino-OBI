#include <bits/stdc++.h>
using namespace std;

#define maxn 500

int t, l, o, d;
int dist[maxn];
vector<pair<int, int>> grafo[maxn];

void solve(int x)
{
    memset(dist, 0x3f3f3f3f, sizeof(dist));

    dist[x] = 1;

    deque<pair<int, int>> fila;
    for (int i = 0; i < grafo[x].size(); i++)
    {
        int v = grafo[x][i].first, linha = grafo[x][i].second;
        dist[v] = 1;
        fila.push_back(make_pair(v, linha));
    }

    while (!fila.empty())
    {
        int u = fila.front().first;
        int linhaatual = fila.front().second;
        fila.pop_front();

        for (int i = 0; i < (int)grafo[u].size(); i++)
        {
            int v = grafo[u][i].first;
            int linha = grafo[u][i].second;
            int d;
            if (linha != linhaatual)
                d = 1;
            else
                d = 0;
            if (dist[v] > dist[u] + d)
            {
                dist[v] = dist[u] + d;
                if (d == 1)
                    fila.push_back(make_pair(v, linha));
                else
                    fila.push_front(make_pair(v, linha));
            }
        }
    }
}

int main()
{
    cin >> t >> l >> o >> d;

    for (int i = 0; i < l; i++)
    {
        int k;
        cin >> k;
        int ultk;
        cin >> ultk;
        for (int j = 1; j < k; j++)
        {
            int v;
            cin >> v;
            grafo[ultk].push_back(make_pair(v, i));
            grafo[v].push_back(make_pair(ultk, i));
        }
    }

    solve(o);
    cout << dist[d] << endl;
}
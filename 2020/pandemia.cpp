#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, I, R;
    vector<int> reuniao[1123];
    int inf[1123]; /* Lista de 0 e 1, onde 0 => false e 1 => true */
    cin >> n >> m;
    cin >> I >> R;

    inf[I] = 1;

    for (int i = 1; i <= m; i++)
    {
        int a;
        cin >> a;

        for (int j = 0; j < a; j++)
        {
            int x;
            cin >> x;
            reuniao[i].push_back(x);
        }
    }

    for (int i = R; i <= m; i++)
    {
        int ok = 0;
        for (int j = 0; j < reuniao[i].size(); j++)
        {
            if (inf[reuniao[i][j]])
                ok = 1;
        }

        if (!ok)
            continue;

        for (int j = 0; j < reuniao[i].size(); j++)
        {
            inf[reuniao[i][j]] = 1;
        }
    }

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (inf[i])
            res++;
    }
    cout << res << endl;

    return 0;
}
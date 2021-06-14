#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int num[10] = {0};
int n, m;

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int in;
    cin >> in;

    num[v[0]]++;

    for (int i = 1; i < m; i++)
    {
        int y;
        cin >> y;

        if (y >= in)
        {
            for (int j = in; j < y; j++)
            {
                num[v[i]]++;
            }
        }
        else
        {
            for (int j = in - 2; j >= y - 1; j--)
            {
                num[v[i]]++;
            }
        }

        in = y;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}
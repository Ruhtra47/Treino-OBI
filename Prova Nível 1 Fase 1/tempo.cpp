#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    pair<char, int> seq[n];
    vector<pair<int, int>> res(n);

    for (int i = 0; i < n; i++)
    {
        cin >> seq[i].first >> seq[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        if (seq[i].first == 'R')
        {
            char cod = seq[i].first;
            int last = 0;
            int t = 0;
            for (int j = i; j < n; j++)
            {
                if (seq[j].second == seq[i].second && seq[j].first != 'T')
                {
                    last = j;
                    cod = seq[j].first;
                }
            }

            for (int j = i + 1; j < last; j++)
            {
                if (seq[j].first == 'T')
                {
                    t += seq[j].second;
                }
                else
                {
                    t++;
                }
            }

            if (cod == 'R' || t == 0)
            {
                t = -1;
            }
            res.push_back(make_pair(seq[i].second, t));
        }
    }

    for (int i = 0; i < res.size(); i++)
    {
        if (res[i].first != 0 && res[i].second != 0)
        {
            cout << res[i].first << " " << res[i].second << endl;
        }
    }
}
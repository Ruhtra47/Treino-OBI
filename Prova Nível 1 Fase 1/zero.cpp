#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> res(n);

    for (int i = 0; i < n; i++)
    {
        int seq;
        cin >> seq;

        if (seq == 0)
        {
            res.pop_back();
        }
        else
        {
            res.push_back(seq);
        }
    }

    int soma = 0;
    for (int i = 0; i < res.size(); i++)
    {
        soma += res[i];
    }

    cout << soma << endl;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> tamanhos(n);

    for (int i = 0; i < n; i++)
    {
        cin >> tamanhos[i];
    }

    vector<int> p_necessarios;
    vector<int> m_necessarios;

    for (int i = 0; i < tamanhos.size(); i++)
    {
        if (tamanhos[i] == 1)
        {
            p_necessarios.push_back(tamanhos[i]);
        }
        else
        {
            m_necessarios.push_back(tamanhos[i]);
        }
    }

    int p_produzidas, m_produzidas;

    cin >> p_produzidas;
    cin >> m_produzidas;

    if (p_necessarios.size() == p_produzidas && m_necessarios.size() == m_produzidas)
    {
        cout << 'S' << endl;
        return 0;
    }
    else
    {
        cout << 'N' << endl;
        return 0;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string m;
    getline(cin, m);

    string chateado = ":-(";
    string divertido = ":-)";
    int chat_count = 0;
    int div_count = 0;

    for (int i = 0; i < m.size(); i++)
    {
        string substr = m.substr(i, 3);
        if (!substr.compare(chateado) == 0)
        {
            chat_count++;
        }
        if (!substr.compare(divertido) == 0)
        {
            div_count++;
        }
    }

    if (chat_count > div_count)
    {
        cout << "divertido" << endl;
    }
    else if (div_count > chat_count)
    {
        cout << "chateado" << endl;
    }
    else if (div_count == chat_count)
    {
        cout << "neutro" << endl;
    }

    cout << m << endl;
}
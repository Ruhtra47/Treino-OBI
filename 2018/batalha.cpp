#include <iostream>
using namespace std;

int main()
{
    int ataque1, defesa1, ataque2, defesa2, res = 0;
    cin >> ataque1 >> defesa1 >> ataque2 >> defesa2;

    if (ataque1 == defesa2 && ataque2 == defesa1)
    {
        res = -1;
    }
    else if (ataque1 != defesa2)
    {
        res = 1;
    }
    else if (ataque2 != defesa1)
    {
        res = 2;
    }
    if (ataque1 != defesa2 && ataque2 != defesa1)
    {
        res = -1;
    }

    cout << res << endl;
}
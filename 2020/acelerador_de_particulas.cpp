#include <iostream>
using namespace std;

int main(void)
{
    int d;
    cin >> d;

    if ((d - 3) % 8 == 3)
    {
        cout << 1 << endl;
        return 0;
    }
    else if ((d - 3) % 8 == 4)
    {
        cout << 2 << endl;
        return 0;
    }
    else if ((d - 3) % 8 == 5)
    {
        cout << 3 << endl;
        return 0;
    }

    return 0;
}
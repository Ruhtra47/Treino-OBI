#include <iostream>
using namespace std;

int solve(int n)
{
    if (n < 2)
    {
        return 1;
    }

    return solve(n - 1) + solve(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << solve(n) << endl;
}
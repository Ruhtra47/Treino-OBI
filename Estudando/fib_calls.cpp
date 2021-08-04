#include <bits/stdc++.h>
using namespace std;

int n, res;

int solve(int n) {
    res++;

    if (n == 0) return 0;
    if (n < 2) return 1;

    return solve(n-1) + solve(n-2);
}

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        res = -1;

        int x;
        cin >> x;

        int fib = solve(x);

        cout << "fib(" << x << ") = " << res << " calls = " << fib << endl;
    }

}
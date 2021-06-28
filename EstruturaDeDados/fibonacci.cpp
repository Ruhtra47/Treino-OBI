#include <bits/stdc++.h>
using namespace std;

#define maxn 10000100

int n, dp[maxn];

int solve(int n) {
    if (dp[n] != -1) return dp[n];

    if (n < 2) return 1;

    dp[n] = solve(n-1) + solve(n-2);

    return dp[n];
}

int main() {
    memset(dp, -1, sizeof(dp));

    cin >> n;

    cout << solve(n) << endl;
}
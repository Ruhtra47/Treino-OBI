#include <bits/stdc++.h>
using namespace std;

int n, res = 0;
int ope, asd;
vector<int> local;

void solve() {
    ope = local.front() - local.back();

    if (local.size() == 1) return;
    
    if (ope == 0) {
        local.pop_back();
        local.erase(local.begin());
        solve();
    } else if (ope > 0) {
        asd = local[-1] + local[-2];
        local.pop_back();
        local.back() = asd;
        res++;
        solve();
    } else if (ope < 0) {
        asd = local[0] + local[1];
        local.erase(local.begin());
        local.front() = asd;
        res++;
        solve();
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        local.push_back(x);
    }

    solve();

    if (res == 0) {
        cout << res << endl;
    } else {
        cout << res-1 << endl;
    }

    return 0;
}
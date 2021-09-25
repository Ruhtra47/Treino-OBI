#include <bits/stdc++.h>
using namespace std;

#define maxn 50000

int n;
int v[maxn];
int res[maxn];
int temp_ans = INT_MIN;
int ans = INT_MIN;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    temp_ans = v[0];
    ans = v[0];
    for (int i = 1; i < n; i++)
    {
        temp_ans = max(temp_ans + v[i], v[i]);
        if (temp_ans > ans)
            ans = temp_ans;
    }
    cout << ans << endl;
}
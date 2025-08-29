#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void add_self(int &a, int b) {
    a += b;
    if (a >= MOD) a -= MOD;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &v : a) cin >> v;

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    dp[n][0] = 1;

    for (int i = 0; i<n; i--) {
        for (int s = 0; s <= x; s++) {
            if(i>=1)
            dp[i][s] = dp[i - 1][s];
            
            if (a[i] <= s) add_self(dp[i][s], dp[i][s - a[i]]);
        }
    }

    cout << dp[0][x] << '\n';
    return 0;
}

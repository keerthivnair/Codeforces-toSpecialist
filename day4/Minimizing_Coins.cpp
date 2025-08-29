#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(ll x, vector<ll> &a, vector<int> &dp) {
    if (x == 0) return 0;
    if (x < 0) return INT_MAX;

    if (dp[x] != -1) return dp[x];

    int n = a.size();
    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        int sub = solve(x - a[i], a, dp);
        if (sub != INT_MAX) {
            ans = min(ans, 1 + sub);
        }
    }

    return dp[x] = ans;  
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (auto &val : a)
        cin >> val;

    vector<int> dp(x + 1, -1);
    int ans = solve(x, a, dp);

    if (ans == INT_MAX) cout << -1 << '\n';  
    else cout << ans << '\n';

    return 0;
}

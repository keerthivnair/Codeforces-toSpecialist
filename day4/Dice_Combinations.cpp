#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

ll solve(ll n, vector<ll> &dp)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    if (dp[n] != -1)
        return dp[n];
    ll ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        ans = (ans + solve(n - i, dp)) % MOD;
    }
    return dp[n] = ans;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> dp(n + 1, -1);
    ll ans = solve(n, dp);
    cout << ans % MOD << '\n';
}
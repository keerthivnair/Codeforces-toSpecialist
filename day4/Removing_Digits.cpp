#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(int n, vector<int> &dp)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MAX;

    if (dp[n] != -1)
        return dp[n];

    int ans = INT_MAX;

    int temp = n;
    while(temp > 0) {
        int digit = temp%10;
        temp = temp/10;
        if (digit == 0) continue;
        ans = min(ans,1+solve(n-digit,dp));
    }

    return dp[n] = ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    int ans = solve(n, dp);

    if (ans == INT_MAX)
        cout << -1 << '\n';
    else
        cout << ans << '\n';

    return 0;
}

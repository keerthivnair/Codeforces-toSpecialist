#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int check(int n, int sum)
{
    if (sum > n)
        return 0;
    if (sum == n)
        return 1;
    int ans = 0;

    for (int i = 1; i <= 6; i++)
    {
        ans += check(n, sum + i)%MOD;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    // dp[s] == number of ways to get some s
    vector<int>dp(n+1,0);
    dp[0]=1;

    for(int s=0;s<n;s++) {
        for(int i=1;i<=6;i++) {
            if((s+i)<=n)
            dp[s+i]=(dp[s+i]+dp[s])%MOD;
        }
    }

    cout << dp[n]<<'\n';
}
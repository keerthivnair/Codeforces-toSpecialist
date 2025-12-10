#include <bits/stdc++.h>
using namespace std;

// dp[s] min number of coins to get sum s

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> dp(x+1, INT_MAX);
    dp[0]=0;

    for (int s = 0; s < x ; s++)
    {
        if(dp[s]==INT_MAX) continue;
        for (int i = 0; i < n; i++)
        {
            if ((s + a[i]) <= x)
            {
                dp[s+a[i]]=min(dp[s+a[i]],dp[s]+1);
            }
        }
    }
    if(dp[x]==INT_MAX) cout << -1 <<'\n';
    else {
        cout << dp[x] <<'\n';
    }
    return 0;
}
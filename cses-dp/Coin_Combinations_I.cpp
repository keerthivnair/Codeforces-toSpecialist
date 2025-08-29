#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x; cin >>n>>x;
    vector<int>dp(x+1,0);
    vector<int>a(n);
    for(auto& x:a) cin >> x;

    dp[0]=1;

    for(int s=0;s<x;s++) {
        for(int i=0;i<n;i++) {
            if((s+a[i])<=x)
            dp[s+a[i]]= (dp[s+a[i]]+dp[s])% MOD;
        }
    }
    cout << dp[x] <<'\n';
    return 0;
}
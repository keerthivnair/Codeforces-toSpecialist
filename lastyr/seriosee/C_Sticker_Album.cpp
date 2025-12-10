/************************************************************
 * Author: Keerthi.V.Nair
 * Competitive Programming Template
 ************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) (int)((x).size())
#define f(i, a, b) for (int i = (a); i < (b); ++i)
typedef long double ld;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int n,l,r; cin >> n >> l >> r;
    vector<ld>dp(n+1);
    dp[n] = 0;
    for(int i=n-1;i>=0;i--) {
        int cnt = 0;
        for(int j=l;j<=r;j++) {
            dp[i]+=dp[min(n,i+j)]+1;
            cnt++;
        }
        if(l==0) {
            dp[i]/=ld(cnt-1);
        }
        else
        dp[i]/=ld(cnt);
    }
    cout << setprecision(5)<< fixed<< dp[0] << '\n';
    return;
}

int32_t main()
{
    fastio();
    // int t;
    // cin >> t;
    // while (t--)
        solve();
    return 0;
}
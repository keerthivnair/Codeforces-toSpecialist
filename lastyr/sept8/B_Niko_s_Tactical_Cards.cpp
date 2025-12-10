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

const int INF = 1e18;
const int MOD = 1e9 + 7;

void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int n; cin >> n;
    vector<int>a(n),b(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n) cin >> b[i];

    int maxel = max(-a[0],b[0]);
    int minel = min(-a[0],b[0]);

    f(i,1,n) {
        int f1 = minel - a[i];
        int f2 = b[i] - minel;
        int f3 = maxel - a[i];
        int f4 = b[i] - maxel;
        maxel = max(max(f1,f2),max(f3,f4));
        minel = min(min(f1,f2),min(f3,f4));
    }
    cout << max(maxel,minel) <<"\n";
    return;
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
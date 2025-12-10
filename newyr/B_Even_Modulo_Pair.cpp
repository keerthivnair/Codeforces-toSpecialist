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
    vector<int>a(n);
    f(i,0,n) cin >> a[i];
    f(i,0,n-1) {
        f(j,i+1,n) {
            int m = a[j]%a[i];
            if(m%2 == 0) {
                cout << a[i] <<" "<<a[j]<<'\n';
                return;
            }
        }
    }
    cout << -1 <<"\n";
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

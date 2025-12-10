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
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    f(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> spaces(n + 1);
    spaces[0] = a[0] - 0;
    spaces[n] = x - a[n - 1];
    int j = 1;
    f(i, 1, n)
    {
        spaces[j] = a[i] - a[i - 1];
        j++;
    }
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

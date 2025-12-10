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
    int n;
    cin >> n;
    vector<int> a(n);
    f(i, 0, n) cin >> a[i];
    map<int, int> mpp;
    f(i, 0, n)
    {
        mpp[a[i]+1]++;
    }
    map<int, int> freq;
    f(i, 0, n) freq[i] = mpp[a[i] + 1];
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
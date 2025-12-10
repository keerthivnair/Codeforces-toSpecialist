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

void solve(vector<int> a, int k)
{
    int n = a.size();
    unordered_map<int, int> mpp;
    vector<int> p(n + 1);
    for (auto &x : a)
        mpp[x]++;
    for (int i = 1; i <= n; i++)
    {
        p[i] = p[i - 1] + mpp[i];
    }
    int ans = 1;
    for (int g = 1; g <= n; g++)
    {
        if ((n - p[min(n, 4 * g - 1)] + mpp[g] + mpp[2 * g] + mpp[3 * g]) >= n - k)
            ans = g;
    }
    cout << ans <<'\n';
    return;
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto& x:a) cin >> x;
        solve(a, k);
    }
    return 0;
}
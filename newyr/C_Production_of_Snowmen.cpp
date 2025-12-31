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

bool good(vector<int> &a, vector<int> &b, int k, int n)
{
    f(i, 0, n)
    {
        if (a[i] >= b[(i + k) % n])
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    f(i, 0, n) cin >> a[i];
    f(i, 0, n) cin >> b[i];
    f(i, 0, n) cin >> c[i];

    int k1 = 0, k2 = 0;
    f(i, 0, n)
    {
        if (good(a, b, i, n))
            k1++;
        if (good(b, c, i, n))
            k2++;
    }
    cout << k1 * k2 * n << '\n';
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




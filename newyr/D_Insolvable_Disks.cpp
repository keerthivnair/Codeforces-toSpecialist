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
    vector<int> l(n,0);
    f(i, 0, n) cin >> a[i];
    int count = 0;
    f(i, 1, n - 1)
    {
        int m = min(a[i] - l[i - 1], a[i + 1]- a[i]) / 2;
        l[i]=m;
        int mm = max(a[i] - l[i - 1], a[i + 1]- a[i]) / 2;
        if (l[i] < mm)
        {
            l[i] = m;
            count++;
        }
    }
    cout << count <<"\n";
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

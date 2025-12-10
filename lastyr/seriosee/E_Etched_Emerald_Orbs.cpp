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
    int k;
    cin >> k;
    int x = 3;
    while ((2 * x - k) < 0)
    {
        x++;
    }
    while (((x * k) / (2 * x - k) % 10) == 0)
    {
        x++;
    }
    cout << x << " " << (x * k) / (2 * x - k) << '\n';
    return;
}

int32_t main()
{
    fastio();
    solve();
    return 0;
}
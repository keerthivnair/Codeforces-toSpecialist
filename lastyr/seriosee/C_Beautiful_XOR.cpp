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
    int i = 0;
    int a, b;
    cin >> b >> a;
    int s = b >> 1 & a >> 1;
    vector<int> res;
    while (a || b)
    {
        if ((a & 1) != (b & 1))
        {
            if (a & 1)
            {
                res.pb(1LL << i);
            }
            else
                res.pb(0);
        }
        a >>= 1;
        b >>= 1;
        i++;
    }
    cout << res.size() << "\n";
    f(i, 0, res.size()) cout << res[i] << " ";
    cout << '\n';
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
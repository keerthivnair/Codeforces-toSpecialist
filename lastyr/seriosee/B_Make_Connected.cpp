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
    vector<vector<char>> a(n, vector<char>(n));
    f(i, 0, n) f(j, 0, n) cin >> a[i][j];

    set<int> sum, diff, x, y;
    f(i, 0, n)
    {
        f(j, 0, n)
        {
            if (a[i][j] == '#')
            {
                sum.insert(i + j);
                diff.insert(i - j);
                x.insert(i);
                y.insert(j);
            }
        }
    }

    if (x.size() < 2 && y.size()<2)
    {
        cout << "YES\n";
        return;
    }
    bool check = false;
    check |= ((*x.rbegin() - *x.begin()) <= 1 && (*y.rbegin() - *y.begin()) <= 1);
    check |= (*sum.rbegin() - *sum.begin()) <= 1;
    check |= (*diff.rbegin() - *diff.begin()) <= 1;

    cout << (check ? "YES" : "NO") << endl;
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

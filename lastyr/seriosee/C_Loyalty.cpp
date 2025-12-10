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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    f(i, 0, n)
    {
        cin >> a[i];
    }
    int i = 0;
    int j = n - 1;
    sort(all(a));
    int sum = 0;
    int ans = 0;
    int count = 0;
    vector<int> res;
    while (i <= j)
    {
        int temp = sum + a[i];
        if (temp / x > count)
        {
            count = temp / x;
            res.pb(a[j]);
            sum += a[j];
            ans += a[j];
            j--;
        }
        else
        {
            res.pb(a[i]);
            sum += a[i];
            i++;
        }
    }
    cout << ans << '\n';
    for (auto &x : res)
        cout << x << ' ';
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
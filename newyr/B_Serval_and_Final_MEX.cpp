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
    bool z = false;
    f(i, 0, n)
    {
        cin >> a[i];
        if (i == n - 1)
        {
            if (a[i] == 0)
                z = true;
        }
    }
    if (!z)
    {
        cout << n / 2 + 1 << '\n';
        int i = 0;
        while (i < n)
        {
            cout << i + 1 << ' ' << i + 2 << '\n';
            i += 2;
        }
        cout << 1 << ' ' << n << '\n';
        return;
    }
    else
    {
        if(n%2==0)
        cout << n / 2 + 1 << '\n';
        else cout << n / 2 + 2 << '\n';
        int i = 0;
        while (i < n)
        {
            cout << i + 1 << ' ' << i + 2 << '\n';
            i += 2;
        }
        if(n%2==1) {
            cout << n-1 <<' '<<n <<'\n';
        }
        cout << 1 << ' ' << n << '\n';
        return;
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

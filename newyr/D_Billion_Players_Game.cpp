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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    f(i, 0, n) cin >> a[i];
    sort(all(a));

    vector<int> pref(n, 0), suff(n, 0);
    pref[0] = -a[0];
    suff[n - 1] = a[n - 1];

    f(i, 1, n) pref[i] = pref[i - 1] - a[i];
    for (int i = n - 2; i >= 0; i--)
        suff[i] = suff[i + 1] + a[i];

    int maxscore = 0;
    if(n==1 && a[0]<=r && a[0]>=l && r-a[0]==a[0]-l) {
        cout << 0 <<'\n';
        return;
    }

    f(i, 0, n)
    {
        int one = INF, two = INF, midone = INF, midtwo = INF;

        if (i >= 1 && i < n - 1)
        {
            one = pref[i - 1] + i * l + suff[i + 1] - (n - i - 1) * l;
            two = pref[i - 1] + i * r + suff[i + 1] - (n - i - 1) * r;
            midone = one + abs(a[i] - l);
            midtwo = two + abs(a[i] - r);
        }
        else if (i == 0)
        {
            one = suff[1] - (n-1)*l;
            two = suff[1] - (n-1)*r;
            midone = one + l-a[0];
            midtwo = two + r-a[0];
            one = INF;
            two = INF;
        }
        else
        {
            one = pref[n-2] + (n-1)*l;
            two = pref[n-2] + (n-1)*r;
            midone = one + l-a[n-1];
            midtwo = two + r-a[n-1];
            one = INF;
            two = INF;
        }

        maxscore = max(maxscore, min({one, two, midone, midtwo}));
    }

    cout << maxscore << endl;
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

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
    int n, h;
    cin >> n >> h;

    int minel = h;
    vector<int> a(n);

    f(i, 0, n)
    {
        cin >> a[i];
        minel = min(minel, a[i]);
    }

    int fmul = h / minel;
    map<int, int> mpp;
    set<int> r;
    for (int x : a)
        mpp[x] = 1;
    set<int> st;
    sort(all(a));

    f(i, 0, n)
    {
        f(j, 2, fmul + 1)
        {
            if ((a[i] * j) > h)
                break;
            if (!mpp.count(a[i] * j))
            {
                cout << -1 << endl;
                return;
            }
            st.insert(a[i] * j);
        }
    }
    f(i, 0, n)
    {
        if (st.find(a[i]) == st.end())
            r.insert(a[i]);
    }
    vector<int> ans;
    for (int el : r)
    {
        ans.pb(el);
    }
    cout << sz(r) << endl;
    ;
    for(int el:ans) cout << el <<' ';
    cout << endl;
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

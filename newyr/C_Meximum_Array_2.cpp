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
    set<int> minst;
    set<int> mexst;
    int n, k, q;
    cin >> n >> k >> q;
    while (q--)
    {
        int c, l, r;
        cin >> c >> l >> r;
        if (c == 1)
        {
            f(i, l, r + 1) minst.insert(i);
        }
        else
        {
            f(i, l, r + 1) mexst.insert(i);
        }
    }
    vector<int>a(n+1,k+1);
    f(i,1,n+1) {
        if(minst.find(i)!=minst.end() || mexst.find(i)!=mexst.end()) {
            if(minst.find(i)!=minst.end() && mexst.find(i)!=mexst.end()) continue;
            else if (minst.find(i)!=minst.end()) a[i]=k;
            else a[i]=i%k;
        }
    }
    f(i,1,n+1) cout << a[i] <<" ";
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

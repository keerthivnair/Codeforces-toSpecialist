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
    int n; cin >> n;
    vector<int>a(n);
    set<int>st;
    f(i,0,n) {
        cin >> a[i];
        st.insert(a[i]);
    }
    if(st.find(st.size())!=st.end()) {
        cout << st.size() <<"\n";
        return;
    }
    else {
        for(auto& x:st) {
            if(x>st.size()) {
                cout << x<<'\n';
                return ;
            }
        }
    }
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
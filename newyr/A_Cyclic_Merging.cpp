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
    f(i, 0, n) cin >> a[i];
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    f(i, 0, n) pq.push({a[i], i});
    set<int> st;
    int ans = 0;
    while (!pq.empty())
    {
        auto [val, ind] = pq.top();
        pq.pop();
        st.insert(ind);
        int prev = (ind - 1 + n) % n;
        int next = (ind + 1) % n;

        while (st.find(prev) != st.end())
            prev = (prev - 1 + n) % n;

        while (prev != next && st.find(next) != st.end())
            next = (next + 1) % n;

        if (next == prev)
        {
            ans += max(val, a[prev]);
            cout << ans << '\n';
            return;
        }
        int minel = min(a[prev], a[next]);
        ans += minel;
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

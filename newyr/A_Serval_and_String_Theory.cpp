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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    char minch = 'z';
    set<char> st;
    f(i, 0, n)
    {
        minch = min(minch, s[i]);
        st.insert(s[i]);
    }
    string t = s;
    reverse(all(t));
    if (s < t)
    {
        cout << "YES \n";
        return;
    }
    else if ((k == 0) || (t == s && st.size()==1))
    {
        cout << "NO \n";
        return;
    }
    else
    {
        cout << "YES \n";
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

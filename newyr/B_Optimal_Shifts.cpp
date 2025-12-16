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
    string s;
    cin >> s;
    int f = 0;
    f(i, 0, n)
    {
        if (s[i] == '1')
        {
            f = i;
            break;
        }
    }
    int maxd = 0;
    int i=(f+1)%n;
    int c = 0;
    int ans = 0;
    while(i!=f) {
        if(s[i]=='0') {
            c++;
            ans = max(ans,c);
        }
        else {
            c=0;
        }
        i=(i+1)%n;
    }
    cout << ans <<'\n';
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

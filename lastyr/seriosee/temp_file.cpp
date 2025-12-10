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
#define fr(i, a, b) for (int i = (a); i >= (b); --i)

using ld = long double;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(string s)
{
    ld n = s.size();
    vector<ld> dp(n + 1, 0);
    fr(i, n - 1, 0)
    {
        ld c = 0, w = 0;
        f(j, i, n)
        {
            if (s[j] == 'C')
                c++;
            else
                w++;
            if (s[i] == 'C')
            {
                dp[i] += dp[j + 1] + w;
            }
            else
            {
                dp[i] += dp[j + 1] + c;
            }
        }
        dp[i] = dp[i] / ld(n - i);
    }
    if (dp[0] == (long long)dp[0])
        cout << fixed << setprecision(1) << dp[0] << '\n';
    else
        cout << fixed << setprecision(12) << dp[0] << '\n';
}

int32_t main()
{
    fastio();
    string s;
    cin >> s;
    solve(s);
    return 0;
}

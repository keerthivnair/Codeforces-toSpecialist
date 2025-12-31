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
    string s;
    cin >> s;
    int n = s.size();
    int c = 0;
    if (s[0] != 's')
    {
        s[0] = 's';
        c++;
    }
    if (s[n - 1] != 's')
    {
        s[n - 1] = 's';
        c++;
    }
    int i = 0;
    while (i < n)
    {
        if (s[i] == 's')
            i++;
        else
        {
            if (s[i + 1] != 's')
            {
                s[i + 1] = 's';
                c++;
            }
            i++;
        }
    }
    cout << c << '\n';
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

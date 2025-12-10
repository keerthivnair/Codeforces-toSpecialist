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
    int curr_rating, div_rate, max_delta, rounds;
    cin >> curr_rating >> div_rate >> max_delta >> rounds;
    string s;
    cin >> s;
    int cnt = 0;
    f(i, 0, rounds)
    {
        if (s[i] == '1')
        {
            cnt++;
            curr_rating  = max(0LL,curr_rating-max_delta);
        }
        else
        {
            if (curr_rating < div_rate)
                {
                    curr_rating = max(0LL,curr_rating - max_delta);
                    cnt++;
                }
        }
    }
    cout << cnt << "\n";
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
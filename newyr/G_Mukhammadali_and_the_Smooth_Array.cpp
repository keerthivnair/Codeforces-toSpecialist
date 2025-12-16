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

    vector<int> cost(n);
    f(i, 0, n) cin >> cost[i];

    vector<int> dp(n, 0);

    // Build dp
    f(i, 0, n - 1)
    {
        f(j, i + 1, n)
        {
            if (a[j] < a[i])
            {
                dp[j] += 1;
            }
        }
    }

    int ans = 0;
    long long minval = LLONG_MAX;

    for (int i = n - 1; i >= 0; i--)
    {

        minval = min(minval, a[i]);
        if (dp[i] == 0)
            continue;

        int j = i - 1;
        int acc = 0;
        int sum = 0;

        while (j >= 0 && dp[j] > 0)
        {
            if (dp[j] >= dp[i] || dp[i - 1] == 0)
            {
                if (dp[j] == 0)
                {
                    acc++;
                    sum += cost[j];
                }
                j--;
            }
            else
            {
                acc++;
                sum += cost[j];
                j--;
            }
        }

        if (j >= 0)
            sum += cost[j];

        if (j >= 0 && dp[j] == 0)
            acc++;

        if (sum > cost[i])
        {
            ans += cost[i];
            a[i] = minval;
            dp[i]-=acc;
        }
        else
        {
            ans += sum;

            for (int k = i - 1; k >= 0 && k >= j; k--)
            {
                a[k] = minval;
                dp[k] = dp[i] - acc;
            }
        }
    }

    cout << ans << '\n';
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

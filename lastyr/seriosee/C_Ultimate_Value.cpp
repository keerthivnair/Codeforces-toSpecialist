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
    int sum = 0;
    f(i, 0, n)
    {
        if (i % 2 == 0)
        {
            sum += a[i];
        }
        else
            sum -= a[i];
    }
    int maxval = sum;
    vector<int> maximum_even(n);
    vector<int> minimum_odd(n);
    maximum_even[0] = a[1];
    minimum_odd[0] = a[0];
    int minel = INT_MAX;
    int maxel = INT_MIN;
    int minindex = n;
    int maxindex = -1;
    
    for (int i = 0; i < n; i++)
    {
        minel = min(minel, minimum_odd[i]);
        maxel = max(maxel, maximum_even[i]);
        if (minel == a[i])
        {
            minindex = min(minindex, i);
        }
        if (maxel == a[i])
        {
            maxindex = max(maxindex, i);
        }
        sum = sum - minimum_odd[i] - maximum_even[i];
        sum+=maxel;
        sum-=minel;
        sum+=maxindex-minindex;
        maxval = max(sum,maxval);
    
    }

    cout << maxval << '\n';
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
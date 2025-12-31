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
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    f(i, 0, n) cin >> a[i];
    sort(all(a));
    if (n % 2 == 0)
    {
        for (int i = 0; i < n - 1; i += 2)
        {
            if (a[i + 1] - a[i] > d)
            {
                cout << "NO \n";
                return;
            }
        }
        cout << "YES \n";
        return;
    }
    else
    {
        int flag = 0;
        for (int i = 0; i < n - 1; i += 2)
        {
            if (a[i + 1] - a[i] > d && flag == 0)
            {
                flag++;
                if (i+2<n && a[i + 2] - a[i + 1] <= d)
                {
                    flag++;
                    i += 1;
                }
                else
                {
                    cout << "NO \n";
                    return;
                }
            }
            else if (a[i + 1] - a[i] > d && flag > 0)
            {
                cout << "NO \n";
                return;
            }
        }
        if (flag <= 1)
            cout << "YES \n";
        else
            cout << "NO \n";
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

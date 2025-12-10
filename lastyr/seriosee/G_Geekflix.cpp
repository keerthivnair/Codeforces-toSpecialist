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
int circ_dist(int b, int a, int n)
{
    int d = abs(b - a);
    return min(d, n - d);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    f(i, 0, n) cin >> a[i];
    f(i, 0, n) cin >> b[i];
    int maxsum = LLONG_MIN;

    f(i, 0, n)
    {
        f(j, 0, n)
        {
            priority_queue<int> pq;
            int temp = m;               
            temp -= circ_dist(i, 0, n); 
            temp -= circ_dist(j, i, n);
            f(k, i, j + 1)
            {
                int t = 1;
                while (t <= temp)
                {
                    int val = max(0LL, a[k] - (t - 1) * b[k]);
                    pq.push(val);
                    t++;
                }
            }
            int k = temp;
            int sum = 0;
            while (!pq.empty() && k > 0)
            {
                int t = pq.top();
                sum += t;
                pq.pop();
                k--;
            }
            maxsum = max(maxsum, sum);
        }
    }
    cout << maxsum << "\n";
    return;
}

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    solve();
}
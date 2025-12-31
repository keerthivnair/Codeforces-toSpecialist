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
    if (k % 2 != 0)
    {
        f(i, 0, k) cout << n << " ";
        cout << '\n';
        return;
    }
    else
    {
        vector<int> a(k, 0);
        int tight = k;
        for (int i = 31; i >= 0; i--)
        {
            if ((n >> i) & 1)
            {
                int leave;
                if (tight > 0)
                    leave = tight - 1;
                else
                    leave = 0;
                f(j, 0, k)
                {
                    if (j == leave)
                        continue;
                    a[j] += (1 << i);
                }
                tight = max(0LL, tight - 1);
            }
            else
            {
                int left = k - tight;
                if(left>1) {
                    if(left%2==0) {
                        f(j,tight,k) {
                            a[j] += (1 << i);
                        }
                    }
                    else {
                        f(j,tight+1,k) {
                            a[j] += (1 << i);
                        }
                    }
                }
            }
        }
        f(i,0,k) cout << a[i] <<" ";
        cout <<"\n";
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

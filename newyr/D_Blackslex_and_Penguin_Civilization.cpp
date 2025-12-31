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

    int LIM = (1LL << n);

    cout << LIM - 1 << " ";
    set<int> st;
    st.insert(LIM - 1);

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < LIM - 1; j++)
        {
            if (st.find(j) != st.end())
                continue;

            int div = (1LL << i); // kept as you asked

            if ((j % div) == ((1LL << i) - 1))
            {
                cout << j << " ";
                st.insert(j);
            }
        }
    }

    for (int i = 0; i < LIM; i++)
    {
        if (st.find(i) == st.end())
            cout << i << ' ';
    }

    cout << endl;
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

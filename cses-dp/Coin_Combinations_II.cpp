#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

void add_self(int &a, int &b)
{
    a += b;
    if (a >= MOD)
    {
        a -= MOD;
    }
}

// so here just the sum is not enough,the last
// no is also important. Therefore we need to
// to keep a 2D dp here.

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    vector<int> dp(x + 1, 0);
    dp[0] = 1;

    for (int coin : c)
    {
        for (int s = 0; s < x; s++)
        {
            if ((s + coin) <= x)
            {
                add_self(dp[s + coin], dp[s]);
            }
        }
    }
    cout << dp[x] << '\n';
}
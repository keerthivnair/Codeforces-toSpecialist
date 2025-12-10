#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> r(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> r[i + 1];
        }

        vector<ll> copy(n + 1, 0);
        ll maxEl = r[1];
        for (ll i = 1; i <= n; i++)
        {
            maxEl = max(maxEl, r[i]);
            copy[i] = maxEl;
        }

        vector<ll> sum(n + 1, 0);
        for (ll i = n; i >= 1; i--)
        {
            if (i == n)
            {
                sum[i] = r[i];
                continue;
            }
            sum[i] = sum[i + 1] + r[i];
        }

        ll sump = 0;
        for (ll i = n; i >= 1; i--)
        {
            sump = max(sum[i] - r[i] + copy[i], sum[i]);
            cout << sump << " ";
        }
        cout << endl;
    }
}

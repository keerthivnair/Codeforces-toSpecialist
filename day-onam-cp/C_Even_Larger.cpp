#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &y : a)
            cin >> y;
        ll ans = 0LL;
        if (a[0] > a[1])
        {
            ans += a[0] - a[1];
            a[0] = a[1];
        }
        if (n == 2)
        {
            cout << ans << '\n';
            continue;
        }
        for (int i = 2; i < n; i += 2)
        {
            ll x = max(0LL, a[i]- (a[i - 1] - a[i - 2]));
            if (i < n - 1)
                x = max(x, a[i] - a[i+1]);
            ans += x;
            a[i] -= x;
        }
        cout << ans <<'\n';
    } return 0;
}
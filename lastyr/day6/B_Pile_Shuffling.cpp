#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll a, b, c, d;
            cin >> a >> b >> c >> d;
            if (b > d)
            {
                ans += a + (b - d);
            }
            else if (a > c)
            {
                ans += a - c;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], m;
        int ans = INT_MAX, c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                c++;
            if (a[i] % k == 0)
                ans = 0;
            ans = min(ans, k - a[i] % k);
        }
        if (k == 4)
        {
            if (c >= 2)
                ans = 0;
            else if (c == 1)
                ans = min(ans, 1);
            else
                ans = min(ans, 2);
        }
        cout << ans << endl;
    }
    return 0;
}
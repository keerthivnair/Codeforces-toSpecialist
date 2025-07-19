#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        int ans = 0;
        if (k < min(a, b))
        {
            cout << 0 << '\n';
            continue;
        }
        int minel = min(a, b);
        int mindiv = 0;

        if (minel == a)
        {
            mindiv = x;
        }
        else
        {
            mindiv = y;
        }
        if (a == b)
        {
            minel = min(x, y);
        }
        if (k >= max(a, b))
            ans += (k - max(a, b)) / min(x, y) + 1;
        int opt1 = k - (ans)*min(x, y);

        if (opt1 >= minel && a != b)
            ans += (opt1 - minel) / mindiv + 1;

        cout << ans << '\n';
    }
    return 0;
}
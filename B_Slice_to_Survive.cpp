#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        int x1, x2, x3, x4;
        x1 = ceil(log2(n));
        x2 = ceil(log2(m));
        x3 = ceil(log2(min(a, n - a + 1)));
        x4 = ceil(log2(min(b, m - b + 1)));
        cout << min((x1 + x4), (x2 + x3)) + 1 << endl;
    }
    return 0;
}
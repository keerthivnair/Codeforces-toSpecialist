// any valid case is acceptable ** solution accepted **

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> res(1);
        int n, m, l, r, x;
        cin >> n >> m >> l >> r;

        x = 0;
        m++;
        int low = 0;
        int high = 0;
        while (x >= l && m--)
        {
            low = min(x, low);
            x--;
        }
        x = 0;
        m++;
        while (x <= r && m--)
        {
            high = max(high, x);
            x++;
        }
        res[0].first = low;
        res[0].second = high;
        cout << res[0].first << " " << res[0].second;
        cout << endl;
    }
}
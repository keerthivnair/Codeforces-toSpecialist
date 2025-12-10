#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        vector<int> temp = a;
        sort(temp.begin(), temp.end(), greater<int>());  

        int val = a[j - 1];

        // okay so lower bound you can only write without function for ascending if descending array mention that .
        int pos = lower_bound(temp.begin(), temp.end(), val, greater<int>()) - temp.begin() + 1;

        if (pos > k and k == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}

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
        vector<int> a(n);
        vector<int> even, odd;
        ll sum = 0;
        for (auto &x : a)
        {
            cin >> x;
            if (x % 2 == 0)
            {
                even.push_back(x);
                sum += x;
            }
            else
                odd.push_back(x);
        }
        sort(odd.begin(), odd.end());
        int l = 0;
        int r = odd.size() - 1;
        if (r < 0)
        {
            cout << 0 << '\n';
            continue;
        }
        ll ans = 0;
        while (l <= r)
        {
            ans += odd[r];
            l++;
            r--;
        }
        cout << sum + ans<<'\n';
    }return 0;
}
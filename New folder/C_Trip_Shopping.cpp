#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        vector<ll> b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count += abs(a[i] - b[i]);
        }
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                {
                    vector<ll> elements = {a[i], a[j], b[i], b[j]};
                    sort(elements.begin(), elements.end());
                    count -= abs(a[i] - b[i]) + abs(a[j] - b[j]);
                    int temp = count + abs(elements[0] - elements[2]) + abs(elements[1] - elements[3]);
                    ans = min(ans, temp);
                    count += abs(a[i] - b[i]) + abs(a[j] - b[j]);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}